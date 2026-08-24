/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:13:35 by jelau             #+#    #+#             */
/*   Updated: 2026/08/06 12:18:53 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	mychar;

	mychar = '0';
	while (mychar <= '9')
	{
		write(1, &mychar, 1);
		mychar++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
