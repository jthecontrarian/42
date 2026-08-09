int	ft_str_is_lowercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 97 || str[n] > 122)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
    printf("%d", ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz"));
	printf("%d", ft_str_is_lowercase("ABCDEFGHIJKLMNOPQrstuvwxyz"));
    printf("%d", ft_str_is_lowercase("ABCDEFGHIJKLMNOPQRSTUVEWXYZ"));
    printf("%d", ft_str_is_lowercase("!"));
	printf("%d", ft_str_is_lowercase(""));
}
*/
