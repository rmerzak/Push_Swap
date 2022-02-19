/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:15:43 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 20:03:35 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_lstclear(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (temp == NULL)
		return ;
	while (lst != NULL)
	{
		temp = lst->next;
		free(lst);
		lst = temp;
	}
}
