/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 19:39:34 by jelau             #+#    #+#             */
/*   Updated: 2026/08/12 11:38:08 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(-2, 0)); //1
	printf("%d\n", ft_recursive_power(-2, 1)); //-2
	printf("%d\n", ft_recursive_power(-2, 2)); //4

	printf("%d\n", ft_recursive_power(-1, 0)); //1
	printf("%d\n", ft_recursive_power(-1, 1)); //-1
	printf("%d\n", ft_recursive_power(-1, 2)); //1

	printf("%d\n", ft_recursive_power(0, 0)); //1
	printf("%d\n", ft_recursive_power(1, 0)); //1
	printf("%d\n", ft_recursive_power(0, 1)); //0
	printf("%d\n", ft_recursive_power(2, 2)); //4

	printf("%d\n", ft_recursive_power(2, -2)); //0
	return (0);
}
*/
