/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:02:13 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 22:15:21 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_two(t_list **stack_a, t_list **stack_b)
{
	(void)stack_b;
	if ((*stack_a)->content > (*stack_a)->next->content)
		ft_execute(stack_a, NULL, "sa");
}
