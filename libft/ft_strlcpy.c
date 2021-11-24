/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:50:08 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/22 17:32:20 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// dstsize include a room for NULL termination
// ft_strlcpy return the source length

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*src != 0 && dstsize > 1)
	{
		*dst = *src;
		src++;
		dst++;
		i++;
		dstsize--;
	}
	while (*src++ != 0)
		i++;
	if (dstsize)
		*dst = 0;
	return (i);
}
