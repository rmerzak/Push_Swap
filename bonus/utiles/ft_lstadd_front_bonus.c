/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:01:42 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 18:21:51 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (new != NULL || *alst != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
