/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_command.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:54:54 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/13 22:13:08 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_command(char *str)
{
	if (!ft_strcmp(str, "pa") || !ft_strcmp(str, "pb"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "sa") || !ft_strcmp(str, "sb"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "ss"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "ra") || !ft_strcmp(str, "rb"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "rr"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "rra") || !ft_strcmp(str, "rrb"))
		write(1, str, ft_sizeof(str));
	if (!ft_strcmp(str, "rrr"))
		write(1, str, ft_sizeof(str));
}
