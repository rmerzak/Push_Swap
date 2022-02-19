/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 22:27:19 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 17:36:57 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_checksorted(t_list *stack)
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = stack;
	temp2 = stack->next;
	while (temp1 && temp2)
	{
		if (temp1->content > temp2->content)
			return (0);
		temp1 = temp1->next;
		temp2 = temp1->next;
	}
	return (1);
}
