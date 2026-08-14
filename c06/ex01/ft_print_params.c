/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 19:04:56 by jelau             #+#    #+#             */
/*   Updated: 2026/08/13 19:57:21 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	(void) argc;
	i = 1;
	while (argv[i])
	{
		i++;
	}
	j = 1;
	while (j < i)
	{
		while (*argv[j] != '\0')
		{
			write(1, argv[j], 1);
			argv[j]++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
