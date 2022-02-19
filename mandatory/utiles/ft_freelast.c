/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freelast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 17:00:32 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/13 21:33:59 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_freelast(t_list **mystack)
{
	t_list	*prev;
	t_list	*current;

	if ((*mystack) != NULL)
	{
		if ((*mystack)->next == NULL)
			*mystack = NULL;
		else
		{
			prev = (*mystack);
			current = (*mystack);
			while (current->next != NULL)
			{
				prev = current;
				current = current->next;
			}
			prev->next = NULL;
		}
	}
}
