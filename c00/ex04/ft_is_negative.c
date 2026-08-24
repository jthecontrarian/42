/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:19:21 by jelau             #+#    #+#             */
/*   Updated: 2026/08/06 14:34:06 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	if (n >= 0)
	{
		positive = 'P';
		write(1, &positive, 1);
	}
	else
	{
		negative = 'N';
		write(1, &negative, 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(-100); // display N
	ft_is_negative(100); // display P
	ft_is_negative(0); // display P
	return (0);
}
*/
