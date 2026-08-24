/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:04:08 by jelau             #+#    #+#             */
/*   Updated: 2026/08/11 16:14:40 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 65 || str[n] > 90)
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
	printf("%d", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVEWXYZ"));
	printf("%d", ft_str_is_uppercase("abcdefghijklmnopqrstuvwxyz"));
	printf("%d", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQrstuvwxyz"));
    printf("%d", ft_str_is_uppercase("!"));
	printf("%d", ft_str_is_uppercase(""));
}
*/
