/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsterreur.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:10:17 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/18 21:29:26 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_lsterreur(t_list *mystack, t_list *stack, int argc, char **argv)
{
	int	i;

	ft_lstclear(mystack);
	ft_lstclear(stack);
	if (argc == 2 || argc == 1)
	{
		i = 0;
		while (argv[i++])
		{
			free(argv[i - 1]);
		}
		free(argv);
	}
	write(2, "Error", 5);
	exit(0);
}
