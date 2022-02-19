/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:15:43 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/18 20:49:17 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while (lst != NULL)
	{
		temp = lst->next;
		free(lst);
		lst = temp;
	}
	free(temp);
}
