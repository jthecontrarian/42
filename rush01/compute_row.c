/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_row.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:21:03 by jelau             #+#    #+#             */
/*   Updated: 2026/08/16 16:21:06 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		valid_row(char *row, char left, char right);

/*
 * Description:
 *     Generate a set of possible rows.
 *
 * Input:
 *     left - left clue. Expect integer between 1 to 4.
 *     right - right clue. Expect integer between 1 to 4.
 *
 * Output:

	*     Returns a string of possible row(s) in the format of "123412431324..." where string length
 *     is always a multiple of 4.
 */
char	*compute_row(char left, char right)
{
	char	per[24][5] = {"1234", "1243", "1324", "1342", "1423", "1432",
			"2134", "2143", "2314", "2341", "2413", "2431", "3124", "3142",
			"3241", "3214", "3412", "3421", "4123", "4132", "4213", "4231",
			"4321", "4312"};
	char	*solutions;
	int		i;
	int		j;
	int		count;

	solutions = malloc(sizeof(char) * (24 * 4 + 1));
	if (!solutions)
		return (NULL);
	i = 0;
	count = 0;
	while (i < 24)
	{
		if (valid_row(per[i], left, right) == 0)
		{
			j = 0;
			while (j < 4)
			{
				solutions[count] = per[i][j];
				count++;
				j++;
			}
		}
		i++;
	}
	solutions[count] = '\0';
	return (solutions);
}
