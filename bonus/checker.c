/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:24:55 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/19 01:14:29 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_execute_bonus(t_list **stack_a, t_list **stack_b, char *str)
{
	if (!ft_strncmp(str, "pa\n", 3))
		ft_push(stack_b, stack_a);
	if (!ft_strncmp(str, "pb\n", 3))
		ft_push(stack_a, stack_b);
	if (!ft_strncmp(str, "sa\n", 3) || !ft_strncmp(str, "ss\n", 3))
		ft_swap(stack_a);
	if (!ft_strncmp(str, "sb\n", 3) || !ft_strncmp(str, "ss\n", 3))
		ft_swap(stack_b);
	if (!ft_strncmp(str, "ra\n", 3) || !ft_strncmp(str, "rr\n", 3))
		ft_rotate(stack_a);
	if (!ft_strncmp(str, "rb\n", 3) || !ft_strncmp(str, "rr\n", 3))
		ft_rotate(stack_b);
	if (!ft_strncmp(str, "rra\n", 4) || !ft_strncmp(str, "rrr\n", 4))
		ft_reverse_rotate(stack_a);
	if (!ft_strncmp(str, "rrb\n", 4) || !ft_strncmp(str, "rrr\n", 4))
		ft_reverse_rotate(stack_b);
}

int	ft_check_instruction(char *str)
{
	int	i;

	i = 0;
	if (!ft_strcmp(str, "pa\n") || !ft_strcmp(str, "pb\n"))
		i = 1;
	if (!ft_strcmp(str, "sa\n") || !ft_strcmp(str, "sb\n"))
		i = 1;
	if (!ft_strcmp(str, "ss\n"))
		i = 1;
	if (!ft_strcmp(str, "ra\n") || !ft_strcmp(str, "rb\n"))
		i = 1;
	if (!ft_strcmp(str, "rr\n"))
		i = 1;
	if (!ft_strcmp(str, "rra\n") || !ft_strcmp(str, "rrb\n"))
		i = 1;
	if (!ft_strcmp(str, "rrr\n"))
		i = 1;
	return (i);
}

void	ft_do(t_list **stack_a, t_list **stack_b, char *str)
{
	int	i;

	i = ft_check_instruction(str);
	if (i == 1)
		ft_execute_bonus(stack_a, stack_b, str);
	else
		ft_lsterreur(*stack_a, *stack_b, 0, NULL);
}

void	ft_checksorted_bonus(t_list *stack_a, t_list *stack_b)
{
	int		i;
	t_list	*temp1;

	i = 1;
	temp1 = stack_a;
	while (temp1 && temp1->next)
	{
		if (temp1->content > temp1->next->content)
			i = 0;
		temp1 = temp1->next;
	}
	if (i == 1 && !stack_b)
	{
		write(1, "OK\n", 3);
		ft_lstclear(stack_a);
		ft_lstclear(stack_b);
	}
	else
	{
		ft_lstclear(stack_a);
		ft_lstclear(stack_b);
		write(1, "KO\n", 3);
	}
}

int	main(int argc, char **argv)
{
	t_list	*b;
	t_list	*a;
	char	*str;

	b = NULL;
	if (argc < 2)
		return (0);
	a = ft_fullstack(argv, argc);
	if (!a)
		ft_erreur();
	while (1)
	{
		str = get_next_line(1);
		if (!str)
			break ;
		ft_do(&a, &b, str);
		free(str);
	}
	ft_checksorted_bonus(a, b);
}
