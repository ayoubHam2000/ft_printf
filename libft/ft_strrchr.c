/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:50:16 by marvin            #+#    #+#             */
/*   Updated: 2021/11/22 17:25:41 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* function locates the last occurrence of c (converted to a char)
	in the string pointed to by s.
* The terminating null character is considered to be part of the 
	string; therefore if c is `\0', the functions locate the 
	terminating `\0'.
* The functions strchr() and strrchr() return a pointer to the
	located character, or NULL if the character does not appear in the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s != 0)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if ((char)c == 0)
		return ((char *)s);
	return (p);
}
