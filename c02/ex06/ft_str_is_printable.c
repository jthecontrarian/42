/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 10:04:00 by jelau             #+#    #+#             */
/*   Updated: 2026/08/10 10:04:01 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 32 || str[n] > 126)
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/*
#include <stdio.h>

int main()
{
	printf("%d", ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUVEWXYZ"));
	printf("%d", ft_str_is_printable("abcdefghijklmnopqrstuvwxyz"));
	printf("%d", ft_str_is_printable("ABCDEFGHIJKLMNOPQrstuvwxyz"));
    printf("%d", ft_str_is_printable("!~"));
	printf("%d", ft_str_is_printable(""));

	char mystr[] = {127, '\0'};
	printf("%d", ft_str_is_printable(mystr)); //should return 0

	char mystr2[] = {31, '\0'};
	printf("%d", ft_str_is_printable(mystr2)); //should return 0
	
	return (0);
}
*/
