/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 17:03:59 by jelau             #+#    #+#             */
/*   Updated: 2026/08/10 17:47:43 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
			{
				return (1);
			}
			return (-1);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d\n", strncmp("abcd", "abcd", 3)); //0
	printf("%d\n", strncmp("", "", 0)); //0

	printf("%d\n", strncmp("abcz", "abcd", 4)); //1
	printf("%d\n", strncmp("abcd", "abcz", 4)); //-1
	printf("%d\n", strncmp("abcd", "abcz", 3)); //0

	printf("%d\n", strncmp("abcd", "abc", 3)); //0
	printf("%d\n", strncmp("abc", "abcd", 3)); //0

	printf("\n");

	printf("%d\n", ft_strncmp("abcd", "abcd",3)); //0 
    printf("%d\n", ft_strncmp("", "", 0)); //0 

    printf("%d\n", ft_strncmp("abcz", "abcd", 4)); //1 
    printf("%d\n", ft_strncmp("abcd", "abcz", 4)); //-1
	printf("%d\n", ft_strncmp("abcz", "abcd", 3)); //0

    printf("%d\n", ft_strncmp("abcd", "abc", 3)); //0
    printf("%d\n", ft_strncmp("abc", "abcd", 3)); //0

	return (0);
}
*/
