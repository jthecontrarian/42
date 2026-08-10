/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 12:21:06 by jelau             #+#    #+#             */
/*   Updated: 2026/08/07 18:57:18 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main()
{   
    // example of strcpy() from <string.h>
    char a[] = "aaaaa";
    char b[] = "bbb";
    printf("%s\n", strcpy(a, b, 2)); //dest,src,number
    printf("dest=%s\nsrc=%s\n", a, b );
    printf("\n");
    
    // testing ft_strcpy()
    char c[] = "aaaaa";
    char d[] = "bbb";
    printf("%s\n", ft_strcpy(c, d, 2));
    printf("dest=%s\nsrc=%s\n", c, d ); 
    
    return (0);
}
*/
