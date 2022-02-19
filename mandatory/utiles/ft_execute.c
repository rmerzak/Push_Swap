/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:09:07 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 22:52:11 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_execute(t_list **stack_a, t_list **stack_b, char *str)
{
	ft_print_command(str);
	write(1, "\n", 1);
	if (!ft_strcmp(str, "pa"))
		ft_push(stack_b, stack_a);
	if (!ft_strcmp(str, "pb"))
		ft_push(stack_a, stack_b);
	if (!ft_strcmp(str, "sa") || !ft_strcmp(str, "ss"))
		ft_swap(stack_a);
	if (!ft_strcmp(str, "sb") || !ft_strcmp(str, "ss"))
		ft_swap(stack_b);
	if (!ft_strcmp(str, "ra") || !ft_strcmp(str, "rr"))
		ft_rotate(stack_a);
	if (!ft_strcmp(str, "rb") || !ft_strcmp(str, "rr"))
		ft_rotate(stack_b);
	if (!ft_strcmp(str, "rra") || !ft_strcmp(str, "rrr"))
		ft_reverse_rotate(stack_a);
	if (!ft_strcmp(str, "rrb") || !ft_strcmp(str, "rrr"))
		ft_reverse_rotate(stack_b);
}
