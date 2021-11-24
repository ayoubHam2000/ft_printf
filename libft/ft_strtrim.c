/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:08:30 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/22 18:56:44 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
* Allocates (with malloc(3)) and returns a copy of
	’s1’ with the characters specified in ’set’ removed
	from the beginning and the end of the string.
* The trimmed string. NULL if the allocation fails.
*/

static int	is_in_set(char const *set, char c)
{
	while (*set != c && *set != 0)
		set++;
	if (*set == 0)
		return (0);
	return (1);
}

static size_t	locate_beginning(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && is_in_set(set, s1[i]))
		i++;
	return (i);
}

static size_t	locate_end(char const *s1, char const *set)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(s1);
	if (length == 0)
		return (0);
	i = length - 1;
	while (i > 0 && is_in_set(set, s1[i]))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		s;
	size_t		e;
	char		*trimed;

	if (!s1)
		return (NULL);
	if (!set)
		set = ft_strdup("");
	s = locate_beginning(s1, set);
	e = locate_end(s1, set);
	if (*s1 && e >= s)
	{
		trimed = malloc(e - s + 2);
		if (!trimed)
			return (NULL);
		ft_strlcpy(trimed, s1 + s, e - s + 2);
	}
	else
	{
		trimed = malloc(1);
		if (!trimed)
			return (NULL);
		*trimed = 0;
	}
	return (trimed);
}
