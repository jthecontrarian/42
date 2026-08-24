/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 14:57:56 by jelau             #+#    #+#             */
/*   Updated: 2026/08/19 11:32:42 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int main()
{
	char str[] = "skibidi";
	char *str2;

	printf("*str=%s, &str=%p\n", str, str);
	str2 = ft_strdup(str);
	printf("*str=%s, &str=%p\n", str, str);
	printf("*str2=%s, &str2=%p\n", str2, str2);
	free(str2);
	return (0);
}
*/
