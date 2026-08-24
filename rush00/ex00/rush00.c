/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 14:42:39 by jelau             #+#    #+#             */
/*   Updated: 2026/08/08 14:42:42 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y) //x is coulmn, y is row
{
	int	row;
	int	column;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((row == 1 && column == 1) || (row == 1 && column == x))
				ft_putchar('o');
			else if ((row == y && column == 1) || (row == y && column == x))
				ft_putchar('o');
			else if ((row == 1 && column < x) || (row == y && column < x))
				ft_putchar('-');
			else if ((row < y && column == 1) || (row < y && column == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			if (column == x)
				ft_putchar('\n');
			column++;
		}
		row++;
	}
}
