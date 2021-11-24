/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:36:31 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/20 13:03:34 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlcat appends string src to the end of dst.
// dstsize include a room for NULL termination
// ft_strlcpy return the src_len + dst_len if dstsize > src_len (man)
// else dst_len + dstsize (test)
// It will append at most dstsize - strlen(dst) - 1 characters.

static	size_t	min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = min(ft_strlen(dst), dstsize);
	while (*dst)
		dst++;
	while (*src != 0 && dstsize > dst_len + 1)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = 0;
	return (dst_len + src_len);
}
