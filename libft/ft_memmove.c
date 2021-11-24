/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:43:31 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/22 17:48:44 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The memmove() function shall copy the first n bytes pointed ..
to by src to the buffer pointed to by dest. Source and destination may overlap.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src && len)
		return (NULL);
	i = 0;
	if (dst > src)
	{
		while (len-- > 0)
		{
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
		}
	}
	else
	{
		while (len-- > 0)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}
