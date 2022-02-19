/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_move_five.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 15:02:06 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/13 21:41:34 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_best_move_five(t_list **stack_a, int i, int lstsize)
{
	if (i == lstsize)
		ft_execute(stack_a, NULL, "rra");
	else if (i == (lstsize - 1))
	{
		ft_execute(stack_a, NULL, "rra");
		ft_execute(stack_a, NULL, "rra");
	}
	else if (i == (lstsize - 2))
	{
		ft_execute(stack_a, NULL, "ra");
		ft_execute(stack_a, NULL, "ra");
	}
	else if (i == (lstsize - 3))
	{
		ft_execute(stack_a, NULL, "ra");
	}
}
