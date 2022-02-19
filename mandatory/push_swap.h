/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:39:01 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/18 23:47:37 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include<fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct t_list
{
	int				content;
	int				indice;
	struct t_list	*next;
}				t_list;
long	ft_atoi(const char *str);
int		ft_isdigit(int c);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
int		ft_lstsize(t_list *lst);
char	**ft_split(const char *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_lstclear(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
int		ft_strcmp(char *s1, char *s2);
int		ft_sizeof(const char *str);
t_list	*ft_fullstack(char **argv, int argc);
t_list	*ft_checkdublicate(t_list *stack);
int		ft_countint(char **inttab, int *i);
int		ft_isnum(char *str);
void	ft_erreur(void);
int		ft_checksorted(t_list *stack);
int		ft_isint(long nbr);
void	*ft_lsterreur(t_list *mystack, t_list *stack, int argc, char **argv);
void	ft_ffree(t_list **a, t_list **b);
void	ft_freelast(t_list **mystack);
void	ft_print_command(char *str);
void	ft_swap(t_list **mystack);
void	ft_push(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **mystack);
void	ft_reverse_rotate(t_list **mystack);
void	ft_execute(t_list **stack_a, t_list **stack_b, char *str);
int		ft_find_min(t_list *maystack);
void	ft_best_move_four(t_list **stack_a, int i, int lstsize);
void	ft_best_move_five(t_list **stack_a, int i, int lstsize);
void	ft_sort(t_list **stack_a, t_list **stack_b, int argc);
void	ft_sort_two(t_list **stack_a, t_list **stack_b);
void	ft_sort_three(t_list **stack_a, t_list **stack_b);
void	ft_sort_four(t_list **stack_a, t_list **stack_b);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);
void	ft_sort_n(t_list **stack_a, t_list **stack_b, int argc);
void	ft_index(t_list **stack_a, int argc);

#endif
