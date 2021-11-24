/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:50:05 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/22 17:50:32 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The memset() function writes len bytes of value c
	(converted to an unsigned char) to the string b.
================
ptr : This is a pointer to the block of memory to fill.
c : This is the value to be set.
size : This is the number of bytes to be set to the value.
=================
return : it returns a pointer to the memory area
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}
