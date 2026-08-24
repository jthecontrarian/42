/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:21:12 by jelau             #+#    #+#             */
/*   Updated: 2026/08/16 16:21:14 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		validate_arg(char *str);
char	*compute_row(char left, char right);
int		valid_board(char *constraints, char *row1, char *row2, char *row3,
			char *row4);
int		solve(char *constraints, char *row1, char *row2, char *row3,
			char *row4);

/*
 * Description:
 *     Prints string provided in standard output.
 *
 * Input:
 *     str - string to print.
 *
 * Output:
 *     Returns void.
 */
void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
 * Description:
 *     Prints string provided in standard error.
 *
 * Input:
 *     str - string to print.
 *
 * Output:
 *     Returns void.
 */
void	putstr_err(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}

/*
 * Description:
 *     validate string given by user.
 *
 * Input:
 *     str
	- 16 clues delimited by space. Expected 16 numbers (1-4) in the format "x x x x x x x x x x x x x x x x"

	*           in the order of "col1top col2top col3top col4top col1bottom col2bottom col3bottom col4bottom

	*                            row1left row2left row3left row4left row1right row2right row3right row4right"
 *
 * Output:
 *     Returns 0 if valid, 1 if not.
 */
int	validate_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 != 0)
		{
			if (str[i] != ' ')
			{
				return (1);
			}
		}
		if (i % 2 == 0)
		{
			if (str[i] != '1' && str[i] != '2' && str[i] != '3'
				&& str[i] != '4')
			{
				return (1);
			}
		}
		i++;
	}
	if (i != 31)
		return (1);
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*row1;
	char	*row2;
	char	*row3;
	char	*row4;

	if (argc != 2)
	{
		putstr_err("Expected exactly one argument.\n");
		return (1);
	}
	if (validate_arg(argv[1]) == 1)
	{
		putstr_err("Expected 16 numbers (1-4) in the format: \"x x x x x x x x x x x x x x x x\".\n");
		return (1);
	}
	row1 = compute_row(argv[1][16], argv[1][24]);
	row2 = compute_row(argv[1][18], argv[1][26]);
	row3 = compute_row(argv[1][20], argv[1][28]);
	row4 = compute_row(argv[1][22], argv[1][30]);
	if (solve(argv[1], row1, row2, row3, row4) == 1)
	{
		putstr_err("No solution found.\n");
		return (1);
	}
	return (0);
}
