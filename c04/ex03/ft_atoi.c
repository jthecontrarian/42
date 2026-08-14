/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 16:46:33 by jelau             #+#    #+#             */
/*   Updated: 2026/08/13 15:04:52 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	is_operator(char c)
{
	if (c == '+' || c == '-')
		return (1);
	else
		return (0);
}

int	is_number(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	value;
	int	num_negative;

	i = 0;
	value = 0;
	num_negative = 0;
	while (is_space(str[i]))
	{
		i++;
	}
	while (is_operator(str[i]))
	{
		if (str[i] == '-')
			num_negative++;
		i++;
	}
	while (is_number(str[i]))
		value = value * 10 + (str[i++] - '0');
	if (num_negative % 2)
		return (-value);
	else
		return (value);
}

/*
//checks for white-space characters.  In the "C" and  "POSIX"  lo‐
//cales,  these are: space, form-feed ('\f'), newline ('\n'), car‐
//riage return ('\r'), horizontal tab  ('\t'),  and  vertical  tab
//('\v').

// space - operator - number - others



#include <stdio.h>
#include <assert.h>

int	main(void)
{
	printf("%d\n",ft_atoi("1")); //1
	printf("%d\n",ft_atoi("")); //0
	printf("%d\n",ft_atoi("0")); //0
    printf("%d\n",ft_atoi("b+-1")); //0
    printf("%d\n",ft_atoi(" \f\n\r\t\v+1")); //1
    printf("%d\n",ft_atoi(" 1")); //1
    printf("%d\n",ft_atoi("   +1")); //1
    printf("%d\n",ft_atoi("   --1")); //1
    printf("%d\n",ft_atoi("   ---1")); //-1
    printf("%d\n",ft_atoi("   +++1")); //1
    printf("%d\n",ft_atoi("  --2b1")); //2
	printf("%d\n",ft_atoi("  --0b1")); //0
	printf("%d\n",ft_atoi("  --123b1")); //123
	printf("%d\n",ft_atoi("  1-")); //1
	printf("%d\n",ft_atoi("  -1+1")); //-1
	printf("%d\n",ft_atoi("  -1-1")); //-1
	printf("%d\n",ft_atoi("1\n1")); //1
	printf("%d\n",ft_atoi("- +")); //0
	printf("%d\n",ft_atoi("+ -")); //0
	printf("%d\n",ft_atoi("- -2")); //0
	printf("%d\n",ft_atoi(" + 2")); //0
	return (0);
}
*/
