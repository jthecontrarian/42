/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 19:29:57 by jelau             #+#    #+#             */
/*   Updated: 2026/08/17 12:00:36 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		result = 1;
		while (power != 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_iterative_power(-2, 0)); //1
	printf("%d\n", ft_iterative_power(-2, 1)); //-2
	printf("%d\n", ft_iterative_power(-2, 2)); //4

	printf("%d\n", ft_iterative_power(-1, 0)); //1
	printf("%d\n", ft_iterative_power(-1, 1)); //-1
	printf("%d\n", ft_iterative_power(-1, 2)); //1

	printf("%d\n", ft_iterative_power(0, 0)); //1
	printf("%d\n", ft_iterative_power(1, 0)); //1
	printf("%d\n", ft_iterative_power(0, 1)); //0
	printf("%d\n", ft_iterative_power(2, 2)); //4

	printf("%d\n", ft_iterative_power(2, -2)); //0
	return (0);
}
*/
