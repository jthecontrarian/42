/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:03:30 by jelau             #+#    #+#             */
/*   Updated: 2026/08/10 10:03:35 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			str[n] = str[n] + 32;
		}
		n++;
	}
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
	char	str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	str2[] = "abcdefghijklmnopqrstuvwxyz";
	char	str3[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	str4[] = "!~";
	char	str5[] = "";

	printf("%s\n", ft_strlowcase(str1));
	printf("%s\n", ft_strlowcase(str2));
	printf("%s\n", ft_strlowcase(str3));
    printf("%s\n", ft_strlowcase(str4));
	printf("%s\n", ft_strlowcase(str5));
	return (0);
}
*/
