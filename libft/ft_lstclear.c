/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aben-ham <aben-ham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:50:30 by aben-ham          #+#    #+#             */
/*   Updated: 2021/11/20 16:59:15 by aben-ham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
* Deletes and frees the given element and every
	successor of that element, using the function ’del’
	and free(3).
	Finally, the pointer to the list must be set to
	NULL.
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!(*lst) || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		tmp = (*lst)->next;
		free ((*lst));
		*lst = tmp;
	}
	*lst = NULL;
}
