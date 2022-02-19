/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_index.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 13:53:15 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/19 00:40:35 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long long	*ft_sorted_table(long long *table, int lstsize)
{
	int			i;
	int			j;
	long long	temp;

	i = 0;
	while (i < lstsize)
	{
		j = i + 1;
		while (j < lstsize)
		{
			if (table[i] - table[j] > 0)
			{
				temp = table[i];
				table[i] = table[j];
				table[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (table);
}

long long	*ft_table(t_list *stack)
{
	int			lstsize;
	t_list		*temp;
	long long	*table;
	int			i;

	lstsize = ft_lstsize(stack);
	table = (long long *)malloc(sizeof(long long) * lstsize);
	temp = stack;
	i = 0;
	while (temp)
	{
		table[i] = temp->content;
		temp = temp->next;
		i++;
	}
	table = ft_sorted_table(table, lstsize);
	return (table);
}

void	ft_index(t_list **stack_a, int argc)
{
	int				i;
	long long		*full_table;
	t_list			*temp;

	(void)argc;
	full_table = ft_table(*stack_a);
	temp = *stack_a;
	i = 0;
	while (temp)
	{
		i = 0;
		while (i < ft_lstsize(*stack_a))
		{
			if (temp->content == full_table[i])
			{
				temp -> indice = i;
				break ;
			}
			i++;
		}
		temp = temp->next;
	}
	free(full_table);
}
