/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:21:20 by jelau             #+#    #+#             */
/*   Updated: 2026/08/16 16:21:21 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		valid_col(char *row1, char *row2, char *row3, char *row4, int col_num,
			char top, char bottom);
void	putstr(char *str);

/*
 * Description:
 *     Prints solution row.
 *
 * Input:
 *     row - One row. Expect 4 numbers (1-4) in the format "xxxx"
 *
 * Output:
 *     Returns void.
 */
void	print_row(char *row)
{
	int		i;
	char	c[2];

	i = 0;
	while (i < 4)
	{
		c[0] = row[i];
		c[1] = '\0';
		putstr(c);
		if (i < 3)
			putstr(" ");
		i++;
	}
	putstr("\n");
}

/*
 * Description:
 *     Prints solution matrix.
 *
 * Input:
 *     row1 - 1st row. Expect 4 numbers (1-4) in the format "xxxx".
 *     row2 - 2nd row. Expect 4 numbers (1-4) in the format "xxxx".
 *     row3 - 3rd row. Expect 4 numbers (1-4) in the format "xxxx".
 *     row4 - 4th row. Expect 4 numbers (1-4) in the format "xxxx".
 *
 * Output:
 *     Returns void.
 */
void	print_matrix(char *row1, char *row2, char *row3, char *row4)
{
	print_row(row1);
	print_row(row2);
	print_row(row3);
	print_row(row4);
}

/*
 * Description:
 *     Validate the board with column clues. Assumes the row1, row2, row3,
	and row4 permutations provided is valid with the row clues.
 *
 * Input:
 *     clues - 16 clues delimited by space. Expected 16 numbers (1-4) in the 
 *             format "x x x x x x x x x x x x x x x x".
 *     row1 - 1st row. Expect 4 numbers (1-4) in the format "xxxx".
 *     row2 - 2nd row. Expect 4 numbers (1-4) in the format "xxxx".
 *     row3 - 3rd row. Expect 4 numbers (1-4) in the format "xxxx".
 *     row4 - 4th row. Expect 4 numbers (1-4) in the format "xxxx".
 *
 * Output:
 *     Returns 0 if valid, 1 if not.
 */
int	valid_board(char *clues, char *row1, char *row2, char *row3, char *row4)
{
	int	col;

	col = 0;
	while (col < 4)
	{
		if (valid_col(row1, row2, row3, row4, col, clues[col * 2], clues[8 + col* 2]) != 0)
			return (1);
		col++;
	}
	return (0);
}

/*
 * Description:
 *     Find a valid 4x4 board by testing every combination of the provided
 *     row permutations against the column clues. Prints the first valid
 *     combination found.
 *
 * Input:
 *     clues - 16 clues delimited by spaces. Expected 16 numbers (1-4) in
 *             the format "x x x x x x x x x x x x x x x x", in the order
 *             of "col1top col2top col3top col4top col1bottom col2bottom
 *             col3bottom col4bottom row1left row2left row3left row4left
 *             row1right row2right row3right row4right"
 *     row1
	- Possible permutations for the 1st row. Expect 4n numbers (1-4) in the format "xxxx..."
 *     row2
	- Possible permutations for the 2nd row. Expect 4n numbers (1-4) in the format "xxxx..."
 *     row3
	- Possible permutations for the 3rd row. Expect 4n numbers (1-4) in the format "xxxx..."
 *     row4
	- Possible permutations for the 4th row. Expect 4n numbers (1-4) in the format "xxxx..."
 *
 * Output:
 *     Returns 0 if a valid board is found and printed, 1 if no valid
 *     combination of rows is found.
 */
int	solve(char *clues, char *row1, char *row2, char *row3, char *row4)
{
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	while (row1[i])
	{
		j = 0;
		while (row2[j])
		{
			k = 0;
			while (row3[k])
			{
				l = 0;
				while (row4[l])
				{
					if (valid_board(clues, &row1[i], &row2[j], &row3[k],
							&row4[l]) == 0)
					{
						print_matrix(&row1[i], &row2[j], &row3[k], &row4[l]);
						return (0);
					}
					l += 4;
				}
				k += 4;
			}
			j += 4;
		}
		i += 4;
	}
	putstr("Error\n");
	return (1);
}
