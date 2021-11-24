/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 21:34:29 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/17 22:32:55 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
* The calloc() function contiguously allocates enough space for count 
	objects that are size bytes of memory each and returns a pointer 
	to the allocated memory.  The allocated memory is filled with bytes 
	of value zero.
* If insufficient memory is available, NULL is returned and
	errno is set to ENOMEM.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (!p)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}
