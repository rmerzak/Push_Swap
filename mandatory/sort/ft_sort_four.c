/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:02:23 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/14 22:57:59 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	int		min;
	int		i;
	int		lstsize;
	t_list	*temp;

	i = 1;
	temp = *stack_a;
	min = ft_find_min(*stack_a);
	lstsize = ft_lstsize(*stack_a);
	while (temp)
	{
		if (temp->content == min)
			break ;
		i++;
		temp = temp->next;
	}
	ft_best_move_four(stack_a, i, lstsize);
	ft_execute(stack_a, stack_b, "pb");
	ft_sort_three(stack_a, NULL);
	ft_execute(stack_a, stack_b, "pa");
}
