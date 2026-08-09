int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] <= 64 || (str[n] >= 91 && str[n] <= 96) || str[n] >= 123)
		{
			return (0);
		}
		n++;
	}
	return (1);
}


#include <stdio.h>

int main()
{
    printf("%d", ft_str_is_alpha("abcdefghijklmnopqrstuvwxyz"));
    printf("%d", ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVEWXYZ"));
    printf("%d", ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVEWXYZ!"));
	printf("%d", ft_str_is_alpha(""));
}

