/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fu_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:34:59 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/24 12:16:25 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fu_putptr(void *ptr)
{
	write(1, "0x", 2);
	if (!ptr)
		return (fu_puthex(0, 'x') + 2);
	return (fu_puthex((unsigned long)ptr, 'x') + 2);
}
