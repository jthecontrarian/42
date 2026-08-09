char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{   
    // example of strncpy() from <string.h>
    char a[] = "aaaaa";
    char b[] = "bbb";
    printf("%s\n", strncpy(a, b, 5)); //dest,src,number
    printf("dest=%s\nsrc=%s\n", a, b );
    printf("\n");
    
    // testing ft_strncpy()
    char c[] = "aaaaa";
    char d[] = "bbb";
    printf("%s\n", ft_strncpy(c, d, 5));
    printf("dest=%s\nsrc=%s\n", c, d ); 
    
    return (0);
}
*/
