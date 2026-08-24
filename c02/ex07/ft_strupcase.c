/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:03:48 by jelau             #+#    #+#             */
/*   Updated: 2026/08/10 10:03:49 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			str[n] = str[n] - 32;
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

	printf("%s\n", ft_strupcase(str1));
	printf("%s\n", ft_strupcase(str2));
	printf("%s\n", ft_strupcase(str3));
    printf("%s\n", ft_strupcase(str4));
	printf("%s\n", ft_strupcase(str5));
	return (0);
}
*/
