/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 00:08:09 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/19 01:13:30 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	print(t_list *stack)
// {
// 	t_list	*temp;   

// 	temp = stack;
// 	while (temp != NULL)
// 	{
// 		printf("|%d|--->|%d|\n", temp->content, temp->indice);
// 		temp = temp->next;
// 	}
// 	printf("\n");
// }

void	ft_sort(t_list **stack_a, t_list **stack_b, int argc)
{
	if (ft_checksorted(*stack_a))
	{
		ft_lstclear(*stack_a);
		return ;
	}
	if (ft_lstsize(*stack_a) == 2)
		ft_sort_two(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 3)
		ft_sort_three(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 4)
		ft_sort_four(stack_a, stack_b);
	else if (ft_lstsize(*stack_a) == 5)
		ft_sort_five(stack_a, stack_b);
	else
		ft_sort_n(stack_a, stack_b, argc);
	ft_lstclear(*stack_a);
	ft_lstclear(*stack_b);
}

int	main(int argc, char **argv)
{
	t_list	*b;
	t_list	*a;

	b = NULL;
	if (argc < 2)
		return (0);
	a = ft_fullstack(argv, argc);
	if (ft_lstsize(a) == 1)
	{
		ft_lstclear(a);
		return (-1);
	}
	if (a)
		ft_sort(&a, &b, argc);
	else
		ft_erreur();
}
