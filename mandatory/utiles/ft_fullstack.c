/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fullstack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:45:40 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/18 23:48:08 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_freeone(char **argv, int p)
{
	int	i;

	i = 0;
	if (p == 2)
	{
		if (!ft_isnum(argv[0]))
			write(2, "Error", 5);
		while (argv[i++])
		{
			free(argv[i - 1]);
		}
		free(argv);
	}
}

t_list	*ft_fullstack(char **argv, int argc)
{
	t_list	*mystack;
	t_list	*temp;
	int		i;
	int		p;

	i = 0;
	p = argc;
	mystack = NULL;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		argc = ft_countint(argv, &i);
	}
	while (++i < argc)
	{
		if (ft_isnum(argv[i]) && ft_isint(ft_atoi(argv[i])))
		{
			temp = ft_lstnew(ft_atoi(argv[i]));
			ft_lstadd_back(&mystack, temp);
		}
		else
			return (ft_lsterreur(mystack, NULL, p, argv));
	}
	ft_freeone(argv, p);
	return (ft_checkdublicate(mystack));
}
