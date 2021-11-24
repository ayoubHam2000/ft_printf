/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:03:39 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/21 10:39:32 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
* Allocates (with malloc(3)) and returns a string
	representing the integer received as an argument.
	Negative numbers must be handled.

* The string representing the integer. NULL if the
	allocation fails.
*/

static int	num_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*res;

	count = num_len(n);
	if (n < 0)
		count++;
	res = malloc(count + 1);
	if (!res)
		return (NULL);
	*(res + count) = 0;
	if (n == 0)
		*res = '0';
	else
	{
		while (n != 0)
		{
			*(res + count - 1) = ft_abs(n % 10) + '0';
			count--;
			n = n / 10;
		}
		if (count == 1)
			*(res) = '-';
	}
	return (res);
}
