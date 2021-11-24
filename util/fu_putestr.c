/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fu_putestr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:48:34 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/24 12:15:34 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
* print a string char by char until \0 or c 
* return number of printed char
*/

int	fu_putestr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != 0 && s[i] != c)
		i++;
	write(1, s, i);
	return (i);
}
