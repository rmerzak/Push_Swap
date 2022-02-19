/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:02:06 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 22:52:24 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_three(t_list **stack_a, t_list **stack_b)
{
	int	b;
	int	c;

	(void)stack_b;
	b = (*stack_a)->next->content;
	c = (*stack_a)->next->next->content;
	if ((*stack_a)->content > b && (*stack_a)->content < c && b < c)
		ft_execute(stack_a, NULL, "sa");
	if ((*stack_a)->content > b && b > c && (*stack_a)->content > c)
	{
		ft_execute(stack_a, NULL, "sa");
		ft_execute(stack_a, NULL, "rra");
	}
	if ((*stack_a)->content > b && (*stack_a)->content > c && b < c)
		ft_execute(stack_a, NULL, "ra");
	if ((*stack_a)->content < b && (*stack_a)->content < c && b > c)
	{
		ft_execute(stack_a, NULL, "sa");
		ft_execute(stack_a, NULL, "ra");
	}
	if ((*stack_a)->content < b && (*stack_a)->content > c && b > c)
		ft_execute(stack_a, NULL, "rra");
}
