/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fu_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:26:15 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/24 12:16:34 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fu_putstr(char *str)
{
	size_t	i;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = ft_strlen(str);
	write(1, str, i);
	return (i);
}
