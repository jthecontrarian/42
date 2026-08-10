/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 17:48:16 by jelau             #+#    #+#             */
/*   Updated: 2026/08/10 18:07:48 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	dest_len;
	int	i;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{	
	char	s1[10] = "dest";
	char	s2[] = "src";
	
	printf("%s\n", strncat(s1, s2, 2));

	char	s3[10] = "dest";
	char	s4[] = "src";
	printf("%s\n", ft_strncat(s3, s4, 2));
	
	return (0);
}
*/
