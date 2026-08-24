/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 12:03:03 by jelau             #+#    #+#             */
/*   Updated: 2026/08/11 15:52:50 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	str[20];
	int		i;

	i = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11), (void)0);
	if (nb == 0)
		return (write(1, "0", 1), (void)0);
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	while (nb > 0)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		if (nb != 0)
			i++;
	}
	while (i >= 0)
		write(1, &str[i--], 1);
}

/*
#include <stdio.h>

int main(void)
{   
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(123);
	printf("\n");
    ft_putnbr(101);
	printf("\n");
    ft_putnbr(12);
    printf("\n");
	ft_putnbr(1);
    printf("\n");
    ft_putnbr(0);
    printf("\n");
	ft_putnbr(-1);
    printf("\n");
	ft_putnbr(-101);
    printf("\n");
    ft_putnbr(-123);
    printf("\n");
    ft_putnbr(-2147483648);

	
	// // the logic
    // printf("%d\n", (123 % 10));
    // printf("%d\n", ((123/10) % 10));
    // printf("%d\n", ((123/10/10) % 10));
	
	return (0);
}
*/
