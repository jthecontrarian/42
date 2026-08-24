/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:04:45 by jelau             #+#    #+#             */
/*   Updated: 2026/08/11 16:15:20 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

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
    printf("%s\n", strncpy(a, b, 2)); //dest,src,number
    printf("dest=%s\nsrc=%s\n", a, b );
    printf("\n");
    
    // testing ft_strncpy()
    char c[] = "aaaaa";
    char d[] = "bbb";
    printf("%s\n", ft_strncpy(c, d, 2));
    printf("dest=%s\nsrc=%s\n", c, d ); 
    
    return (0);
}
*/
