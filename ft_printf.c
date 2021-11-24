/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 14:16:47 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/24 16:23:16 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_args_types(const char *str, va_list arg)
{
	if (*str == 's')
		return (fu_putstr(va_arg(arg, char *)));
	if (*str == 'c')
		return (fu_putchar(va_arg(arg, int)));
	if (*str == '%')
		return (fu_putchar('%'));
	if (*str == 'd' || *str == 'i')
		return (fu_putint(va_arg(arg, int)));
	if (*str == 'u')
		return (fu_putuint(va_arg(arg, unsigned int)));
	if (*str == 'x' || *str == 'X')
		return (fu_puthex(va_arg(arg, unsigned int), *str));
	if (*str == 'p')
		return (fu_putptr(va_arg(arg, void *)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		tmp;
	va_list	arg;

	va_start(arg, str);
	len = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			len = len + handle_args_types(str, arg);
			str++;
		}
		else
		{
			tmp = fu_putestr(str, '%');
			str = str + tmp;
			len = len + tmp;
		}
	}
	va_end(arg);
	return (len);
}


