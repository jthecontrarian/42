/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelau <jelau@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 18:23:49 by jelau             #+#    #+#             */
/*   Updated: 2026/08/13 10:50:05 by jelau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <limits.h>
#include <time.h>
#include <math.h>

int    ft_sqrt_1(int nb)
{
    int n = 46340;
    int temp;

    temp = (n * n);
    if (nb >= 10)
    {
        while (nb < temp)
        {
            n = n * 0.9;
            temp = (n * n);
        }
        while (nb >= temp)
        {
            if (temp == nb)
                return n;
            else
            {
                n++;
                temp = (n * n);
            }
        }
        return (0);
    }
    else 
    {    n = 0;
        while ( n * n < nb)
        {
            n++;
        }
            if ( n*n == nb)
                return n;
    }
    return 0;
}

int	ft_sqrt_2(int nb)
{
    int n;

    n = 0;
    while (n * n <= nb)
    {
        if (n * n == nb)
            return (n);
        n++;
    }
    return (0);
}
*/

int ft_sqrt(int nb)
{
    int left;
    int mid;
    int right;

    if (nb == 0)
        return (0);

    left = 1;
    right = nb;
    while (left <= right)
    {
        mid = left + (right - left) / 2; // mid = (left + right) / 2;
        // if (mid < nb / mid)
        //     left = mid + 1;
        // else if (mid > nb / mid)
        //     right = mid - 1;
        // else
        //     return mid;
        if (mid == nb / mid && nb % mid == 0)
            return (mid);
        else if (mid < nb / mid)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return (0); //not perfect square
}
/*
int	reference_sqrt(int nb)
{
	double	root;

	if (nb < 0)
		return (0);

	root = sqrt((double)nb);

	if (root != (int)root)
		return (0);

	return ((int)root);
}

void	test_correctness(const char *name, int (*sqrt_func)(int))
{
	int	tests[] = {
		INT_MIN,
		INT_MIN + 1,
		-1000000,
		-100,
		-10,
		-1,
		0,
		1,
		2,
		3,
		4,
		5,
		8,
		9,
		10,
		15,
		16,
		17,
		24,
		25,
		26,
		99,
		100,
		101,
		999,
		1000,
		10000,
		1000000,
		100000000,
		2147395600,	// 46340^2
		2147395601,
		2147483646,
		INT_MAX
	};
	int	count;
	int	i;
	int	expected;
	int	actual;
	int	errors;

	count = sizeof(tests) / sizeof(tests[0]);
	errors = 0;

	i = 0;
	while (i < count)
	{
		expected = reference_sqrt(tests[i]);
		actual = sqrt_func(tests[i]);

		if (actual != expected)
		{
			printf("%s: FAIL for %d: got %d, expected %d\n",
				name, tests[i], actual, expected);
			errors++;
		}
		i++;
	}

	// // Exhaustive test of -1,000,000 -> 1,000,000 
	// i = -1000000;
	// while (i <= 1000000)
	// {
	// 	expected = reference_sqrt(i);
	// 	actual = sqrt_func(i);

	// 	if (actual != expected)
	// 	{
	// 		printf("%s: FAIL for %d: got %d, expected %d\n",
	// 			name, i, actual, expected);
	// 		errors++;
	// 		if (errors >= 20)
	// 		{
	// 			printf("%s: stopping after 20 errors\n", name);
	// 			break;
	// 		}
	// 	}
	// 	i++;
	// }

	if (errors == 0)
		printf("%s: PASS\n", name);
	else
		printf("%s: %d errors\n", name, errors);
}

void	test_time(const char *name, int (*sqrt_func)(int), int max)
{
	clock_t	start;
	clock_t	end;
	long long	sum;
	int		n;

	sum = 0;
	start = clock();

	n = 0;
	while (n <= max)
	{
		sum += sqrt_func(n);
		n++;
	}

	end = clock();

	printf("%s\n", name);
	printf("  Range : 0 -> %d\n", max);
	printf("  Sum   : %lld\n", sum);
	printf("  Time  : %.6f seconds\n\n",
		(double)(end - start) / CLOCKS_PER_SEC);
}

int	main(void)
{
	// int	max;

	// max = 100000000;

	// printf("===== SQRT TIME BENCHMARK =====\n\n");

	// test_time("ft_sqrt_1", ft_sqrt_1, max);
	// test_time("ft_sqrt_2", ft_sqrt_2, max);
    // test_time("ft_sqrt_3", ft_sqrt_3, max);

    printf("===== SQRT CORRECTNESS BENCHMARK =====\n\n");
    // NEED TO RUN WITH -lm flag to use sqrt() function from math.h
    // test_correctness("ft_sqrt_1", ft_sqrt_1);
	// test_correctness("ft_sqrt_2", ft_sqrt_2);
	test_correctness("ft_sqrt_3", ft_sqrt_3);
	return (0);
}
*/
