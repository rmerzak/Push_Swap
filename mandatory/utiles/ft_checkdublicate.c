/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdublicate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:46:22 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/18 22:08:05 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_checkdublicate(t_list *stack)
{
	t_list	*temp;
	t_list	*safe;

	safe = stack;
	while (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (temp ->content == stack->content)
			{
				ft_lstclear(safe);
				return (NULL);
			}
			temp = temp->next;
		}
		stack = stack->next;
	}
	return (safe);
}
