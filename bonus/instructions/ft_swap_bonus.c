/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:44:00 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 17:39:11 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_swap(t_list **mystack)
{
	int	temp;

	if (*mystack != NULL && ft_lstsize(*mystack) != 1)
	{
		temp = (*mystack)->content;
		(*mystack)->content = (*mystack)->next->content;
		(*mystack)->next->content = temp;
	}
}
