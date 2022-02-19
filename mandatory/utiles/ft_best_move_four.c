/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_best_move_four.                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 19:33:32 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/13 22:03:15 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_best_move_four(t_list	**stack_a, int i, int lstsize)
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
	}
}
