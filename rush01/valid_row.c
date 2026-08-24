/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:21:38 by jelau             #+#    #+#             */
/*   Updated: 2026/08/16 16:21:40 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Description:
 *     Count number of visible buildings.
 *
 * Input:
 *     row - a row. Expect 4 numbers (1-4) in the format "xxxx".
 *     start - the starting index. Expect an integer from 0 to 3.
 *     step - the direction. Expect the integer 1 or -1.
 *
 * Output:
 *     Returns the number of building counted.
 */
int	count_visible(char *row, int start, int step)
{
	int	i;
	int	max;
	int	count;

	i = start;
	max = 0;
	count = 0;
	while (i >= 0 && i < 4)
	{
		if (row[i] - '0' > max)
		{
			max = row[i] - '0';
			count++;
		}
		i = i + step;
	}
	return (count);
}

/*
 * Description:
 *     Check a row with the two clues given.
 *
 * Input:
 *     row - A row. Expect 4 numbers (1-4) in the format "xxxx".
 *     left - The left clue of a row. Expect a character from '0' to '4'.
 *     right - The right clue of a row. Expect a character from '0' to '4'.
 *
 * Output:
 *     Returns 0 if valid, 1 if not.
 */
int	valid_row(char *row, char left, char right)
{
	if (count_visible(row, 0, 1) != left - '0')
		return (1);
	if (count_visible(row, 3, -1) != right - '0')
		return (1);
	return (0);
}

/*
 * Description:
 *     Check a column with the two clues given.
 *
 * Input:
 *     row1 - 1st row. Expect 4 numbers (1-4) in the format "xxxx"
 *     row2 - 2nd row. Expect 4 numbers (1-4) in the format "xxxx"
 *     row3 - 3rd row. Expect 4 numbers (1-4) in the format "xxxx"
 *     row4 - 4th row. Expect 4 numbers (1-4) in the format "xxxx"
 *     col_num - The column to check. Expect an integer from 0 to 3.
 *     top - The top clue of a column. Expect an character from '0' to 4'.
 *     bottom - The bottom clue of a column. Expect an character from '0' to '4'.
 *
 * Output:
 *     Returns 0 if valid, 1 if not.
 */
int	valid_col(char *row1, char *row2, char *row3, char *row4, int col_num,
		char top, char bottom)
{
	char	col[4];
	int		i;
	int		j;

	col[0] = row1[col_num];
	col[1] = row2[col_num];
	col[2] = row3[col_num];
	col[3] = row4[col_num];
	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
		{
			if (col[i] == col[j])
				return (1);
			j++;
		}
		i++;
	}
	if (count_visible(col, 0, 1) != top - '0')
		return (1);
	if (count_visible(col, 3, -1) != bottom - '0')
		return (1);
	return (0);
}
