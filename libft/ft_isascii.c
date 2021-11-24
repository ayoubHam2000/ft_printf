/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:49:36 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/20 19:06:48 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The isascii() function tests if a given character is an ASCII character.
int	ft_isascii(int c)
{
	if (c >= 0x0 && c < 0x80)
		return (1);
	return (0);
}
