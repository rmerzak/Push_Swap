/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:51:29 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 17:37:01 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_countint(char **inttab, int *i)
{
	int	j;

	j = 0;
	while (inttab[j] != NULL)
	{
		j++;
	}
	(*i)--;
	return (j);
}
