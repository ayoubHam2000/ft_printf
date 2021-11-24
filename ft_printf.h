/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:09:41 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/24 12:11:56 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

//util
int	fu_numlen(unsigned int n);
int	fu_putint(int n);
int	fu_putuint(unsigned int n);
int	fu_putstr(char *str);
int	fu_putchar(char c);
int	fu_putestr(const char *s, char c);
int	fu_puthex(unsigned long n, int type_case);
int	fu_putptr(void *ptr);

int	ft_printf(const char *str, ...);

#endif