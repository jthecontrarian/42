/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 22:42:14 by jelau             #+#    #+#             */
/*   Updated: 2026/08/20 22:50:01 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_putstr_err(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	int	fd;
	char	buffer[29000];
	ssize_t	data;
	
	
	if (argc == 1)
	{
		data = read(0, buffer, sizeof(buffer));
		while (data > 0)
		{
			write(1, buffer, data);
			data = read(0, buffer, sizeof(buffer));
		} 
	}	
		
	i = 1;
	if (argc > 1)
	{
		while(i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			
			if (fd < 0)
			{
				ft_putstr_err("./ft_cat: ");
				ft_putstr_err(argv[i]);
				ft_putstr_err(": ");
				j = 0;
				while (strerror(errno)[j] != '\0')
				{
					
					write(2, &strerror(errno)[j], 1);
					j++;
				}
				ft_putstr_err("\n");
			}
			
			data = read(fd, buffer, sizeof(buffer));
			while (data > 0)
			{
				write(1, buffer, data);
				data = read(fd, buffer, sizeof(buffer));
			}
			close(fd);
			i++;
		}
	}
	return (0);
}
