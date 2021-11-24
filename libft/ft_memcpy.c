/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:49:59 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/20 19:07:44 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void *memcpy(void *dest, const void *src, size_t n)
copies n characters from memory area src to memory area dest.
=============
dest : this is a pointer to the block of memory where
the content is to be copied
src : a pointer to the source of block of memory to be copied
n : number of bytes to be copied
=============
return a pointer to destination
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src && n)
		return (NULL);
	d = dst;
	s = src;
	while (n-- > 0)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
