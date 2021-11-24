/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:33:02 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/20 19:04:49 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strnstr() function locates the first occurrence of the 
	null-terminated string needle in the string haystack, 
	where not more than len characters are searched.
    Characters that appear after a `\0' character are not searched.
	
* If needle is an empty string, haystack is returned; if needle occurs 
	nowhere in haystack, NULL is returned; otherwise a pointer 
	to the first character of the first occurrence of needle is returned.
*/

static int	compare(const char *str, const char *needle)
{
	while (*str == *needle && *needle)
	{
		str++;
		needle++;
	}
	if (*str != *needle && *needle)
		return (0);
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == 0)
		return ((char *)haystack);
	while (*haystack != 0 && len >= needle_len)
	{
		if (compare(haystack, needle))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
