/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:08:07 by jelau             #+#    #+#             */
/*   Updated: 2026/08/10 18:37:26 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while (to_find[j] != '\0' )
			{
				xxx;
				j++;
			}
			if (to_find[j] == '\0')
			{
				return (xxx);
			}
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{	
	char	s1[] = "skibidi";
	char	s2[] = "bi";
	
	printf("%s\n", strstr(s1, s2));

	char	s3[] = "skibidi";
	char	s4[] = "bi";
	printf("%s\n", ft_strstr(s3, s4));
	
	return (0);
}
