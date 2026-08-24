/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:04:28 by jelau             #+#    #+#             */
/*   Updated: 2026/08/10 10:04:29 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 48 || str[n] > 57)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_numeric("0123456789"));
	printf("%d", ft_str_is_numeric("0123456789a"));
	printf("%d", ft_str_is_numeric(""));
	return (0);
}
*/
