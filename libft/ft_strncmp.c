/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:58:25 by marvin            #+#    #+#             */
/*   Updated: 2021/11/20 19:08:52 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* strncmp compares at most the first n bytes of str1 and str2.
	if Return value < 0 then it indicates str1 is less than str2.
	if Return value > 0 then it indicates str2 is less than str1.
	if Return value = 0 then it indicates str1 is equal to str2.
* The strcmp() and strncmp() functions return an integer greater than, 
	equal to, or less than 0, according as the string s1 is greater 
	than, equal to, or less than the string s2.  The comparison is done
    using unsigned characters, so that `\200' is greater than `\0'.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n > 1 && (unsigned char)*s1 == (unsigned char)*s2 && *s1 != 0)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
