/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:11:46 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/20 19:07:39 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memcmp() function compares byte string s1 against byte string s2.
	Both strings are assumed to be n bytes long.
* The memcmp() function returns zero if the two strings are identical, 
	otherwise returns the difference between the first two differing bytes
	(treated as unsigned char values, so that `\200' is greater
     than `\0', for example).  Zero-length strings are always identical.
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 1 && *((unsigned char *)s1) == *((unsigned char *)s2))
	{
		s1++;
		s2++;
		n--;
	}
	return (*((unsigned char *)s1) - *((unsigned char *)s2));
}
