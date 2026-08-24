/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 12:57:09 by jelau             #+#    #+#             */
/*   Updated: 2026/08/05 14:50:11 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	mychar;

	mychar = 'a';
	while (mychar <= 'z')
	{
		write(1, &mychar, 1);
		mychar++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
