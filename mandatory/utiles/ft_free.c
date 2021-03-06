/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:48:34 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/14 23:42:43 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_ffree(t_list **a, t_list **b)
{
	ft_lstclear(*a);
	ft_lstclear(*b);
}
