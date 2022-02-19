/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:37:19 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/13 22:17:58 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find_min(t_list *mystack)
{
	t_list	*temp;
	int		min;

	temp = mystack;
	min = 2147483647;
	while (temp)
	{
		if (temp->content < min)
		{
			min = temp->content;
		}
		temp = temp->next;
	}
	return (min);
}
