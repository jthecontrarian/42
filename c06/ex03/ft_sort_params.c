/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 23:05:55 by jelau             #+#    #+#             */
/*   Updated: 2026/08/13 23:57:07 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int ft_strcmp(char *a, char *b)
{	
	int i;

	i = 0;
	while(a[i] != '\0' && b[i] != '\0' && a[i] == b[i])
	{
		i++;
	}
	return (a[i] - b[i]);
}

void	ft_sort(int argc, char **argv)
{
    int i;
    int j;
    char *tmp;

    i = 1;
    while (i < argc -1)
    {
        j = i + 1;
        while (j < argc)
        {
            if (ft_strcmp(argv[i], argv[j]) < 0)
            {
                tmp = argv[i];
                argv[i] = argv[j];
                argv[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char *argv[])
{	
	int	n;

	ft_sort(argc, argv);
    n = 1;
    while (n < argc)
    {
        ft_putstr(argv[n]);
        ft_putstr("\n");
        n++;
    }
    return (0);
}
