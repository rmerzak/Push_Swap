/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsterreur.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 23:10:17 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/15 23:19:27 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	*ft_lsterreur(t_list *mystack, t_list *stack, int argc, char **argv)
{
	int	i;

	ft_lstclear(mystack);
	ft_lstclear(stack);
	if (argc == 2)
	{
		i = 0;
		while (argv[i++])
		{
			free(argv[i - 1]);
		}
		free(argv);
	}
	write(2, "Error\n", 6);
	exit(0);
}
