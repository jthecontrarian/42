/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 19:46:52 by jelau             #+#    #+#             */
/*   Updated: 2026/08/12 11:31:53 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

int main(void)
{
	// 0, 1, 1, 2, 3, 5, 8, 13, ...
	printf("%d\n", ft_fibonacci(-2)); // -1   
	printf("%d\n", ft_fibonacci(-1)); // -1
	printf("%d\n", ft_fibonacci(0)); // 0
	printf("%d\n", ft_fibonacci(1)); // 1
	printf("%d\n", ft_fibonacci(2)); // 1
	printf("%d\n", ft_fibonacci(3)); // 2
	printf("%d\n", ft_fibonacci(4)); // 3
	printf("%d\n", ft_fibonacci(5)); // 5
	printf("%d\n", ft_fibonacci(6)); // 8
	return (0);
}
*/
