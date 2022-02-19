/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:17:57 by rmerzak           #+#    #+#             */
/*   Updated: 2022/02/19 01:14:18 by rmerzak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct t_list
{
	int				content;
	int				indice;
	struct t_list	*next;
}				t_list;
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
char	*ft_strchr(char *str, int c);
long	ft_atoi(const char *str);
int		ft_isdigit(int c);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **alst, t_list *n);
void	ft_lstadd_back(t_list **alst, t_list *n);
int		ft_lstsize(t_list *lst);
char	**ft_split(const char *s, char c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_lstclear(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
int		ft_strcmp(char *s1, char *s2);
t_list	*ft_fullstack(char **argv, int argc);
t_list	*ft_checkdublicate(t_list *stack);
int		ft_countint(char **inttab, int *i);
int		ft_isnum(char *str);
int		ft_isint(long nbr);
void	*ft_lsterreur(t_list *mystack, t_list *stack, int argc, char **argv);
void	ft_swap(t_list **mystack);
void	ft_push(t_list **stack_a, t_list **stack_b);
void	ft_rotate(t_list **mystack);
void	ft_reverse_rotate(t_list **mystack);
int		ft_checksorted(t_list *stack);
void	ft_erreur(void);

#endif
