/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:39:02 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/13 22:27:58 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*head_to;
	t_list	*head_from;

	if (ft_lstsize(*stack_a) == 0)
		return ;
	head_to = *stack_b;
	head_from = *stack_a;
	tmp = head_from;
	head_from = head_from->next;
	*stack_a = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_b = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_b = tmp;
	}
}
