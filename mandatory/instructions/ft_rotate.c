/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:44:11 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 23:16:39 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_list **mystack)
{
	t_list	*last;
	t_list	*head;

	if (*mystack != NULL && ft_lstsize(*mystack) != 1)
	{
		head = *mystack;
		last = ft_lstlast(*mystack);
		*mystack = head->next;
		head->next = NULL;
		last->next = head;
	}
}
