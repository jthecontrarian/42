/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 18:23:49 by jelau             #+#    #+#             */
/*   Updated: 2026/08/13 15:45:21 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	left;
	int	mid;
	int	right;

	left = 1;
	right = nb;
	if (nb == 0)
		return (0);
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (mid == nb / mid && nb % mid == 0)
			return (mid);
		else if (mid < nb / mid)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (0);
}

/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	
	// Notes:
	// mid = (left + right) / 2;
	printf("%d\n", ft_sqrt(INT_MIN)); 
	printf("%d\n", ft_sqrt(INT_MIN + 1)); 
	printf("%d\n", ft_sqrt(-1));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(1)); 
	printf("%d\n", ft_sqrt(2)); 
	printf("%d\n", ft_sqrt(3)); 
	printf("%d\n", ft_sqrt(4)); 
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(100));
	printf("%d\n", ft_sqrt(1000000));
	printf("%d\n", ft_sqrt(1000001));
	printf("%d\n", ft_sqrt(INT_MAX - 1));
	printf("%d\n", ft_sqrt(INT_MAX));
	return(0);
}
*/
