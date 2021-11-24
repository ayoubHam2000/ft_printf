/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fu_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:16:30 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/24 16:18:35 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	f_puthexchar(int n, int type_case)
{
	char	c;

	if (n >= 10 && n <= 15)
		c = n - 10 + 'a';
	else
		c = n + '0';
	if (type_case == 'X' && n >= 10 && n <= 15)
		c = c - 32;
	ft_putchar_fd(c, 1);
}

int	fu_puthex(unsigned long n, int type_case)
{
	int	len;

	len = 1;
	if (n == 0)
		ft_putchar_fd('0', 1);
	else
	{
		if (n / 16 != 0)
			len = len + fu_puthex(n / 16, type_case);
		f_puthexchar(n % 16, type_case);
	}
	return (len);
}
