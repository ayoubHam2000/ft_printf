/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:47:49 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/20 19:09:13 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* toupper() function converts a lower-case letter to the 
	corresponding upper-case letter.
* If the argument is a lower-case letter, the toupper() function
	returns the corresponding upper-case letter
	if there is one; otherwise, the argument is 
	returned unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
