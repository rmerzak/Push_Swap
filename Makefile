# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmerzak <rmerzak@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 23:54:06 by rmerzak           #+#    #+#              #
#    Updated: 2022/02/19 00:39:41 by rmerzak          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

NAME_CHECKER = checker

CC = gcc

CFLAGS = -Wall -Werror -Wextra

HEADER_MANDATORY = push_swap.h

HEADER_BONUS = checker.h

SRC_FILE =	mandatory/push_swap.c\
			mandatory/utiles/ft_countint.c\
			mandatory/utiles/ft_fullstack.c\
			mandatory/utiles/ft_isnum.c\
			mandatory/utiles/ft_isint.c\
			mandatory/utiles/ft_lsterreur.c\
			mandatory/utiles/ft_checksorted.c\
			mandatory/utiles/ft_checkdublicate.c\
			mandatory/instructions/ft_swap.c\
			mandatory/utiles/ft_erreur.c\
			mandatory/instructions/ft_push.c\
			mandatory/instructions/ft_rotate.c\
			mandatory/instructions/ft_reverse_rotate.c\
			mandatory/utiles/ft_freelast.c\
			mandatory/utiles/ft_execute.c\
			mandatory/utiles/ft_print_command.c\
			mandatory/sort/ft_sort_two.c\
			mandatory/sort/ft_sort_three.c\
			mandatory/sort/ft_sort_four.c\
			mandatory/sort/ft_sort_five.c\
			mandatory/sort/ft_sort_n.c\
			mandatory/utiles/ft_find_min.c\
			mandatory/utiles/ft_best_move_four.c\
			mandatory/utiles/ft_best_move_five.c\
			mandatory/utiles/ft_index.c\
			mandatory/utiles/ft_free.c\
			mandatory/utiles/ft_atoi.c\
			mandatory/utiles/ft_isdigit.c\
			mandatory/utiles/ft_strncmp.c\
		  	mandatory/utiles/ft_putstr_fd.c\
			mandatory/utiles/ft_split.c\
			mandatory/utiles/ft_lstclear.c\
			mandatory/utiles/ft_lstadd_back.c\
			mandatory/utiles/ft_lstlast.c\
		  	mandatory/utiles/ft_lstnew.c\
			mandatory/utiles/ft_lstadd_front.c\
			mandatory/utiles/ft_lstsize.c\
			mandatory/utiles/ft_strlcpy.c\
			mandatory/utiles/ft_strcmp.c\
			mandatory/utiles/ft_sizeof.c\

OBJ_FILE = $(SRC_FILE:%.c=%.o)
			
SRC_BONUS = bonus/checker.c\
			bonus/utiles/get_next_line_utils_bonus.c\
			bonus/utiles/get_next_line_bonus.c\
			bonus/utiles/ft_fullstack_bonus.c\
			bonus/utiles/ft_atoi_bonus.c\
			bonus/utiles/ft_checkdublicate_bonus.c\
			bonus/utiles/ft_countint_bonus.c\
			bonus/utiles/ft_isint_bonus.c\
			bonus/utiles/ft_isdigit_bonus.c\
			bonus/utiles/ft_isnum_bonus.c\
			bonus/utiles/ft_lstnew_bonus.c\
			bonus/utiles/ft_lstadd_front_bonus.c\
			bonus/utiles/ft_sizeof_bonus.c\
			bonus/utiles/ft_lsterreur_bonus.c\
			bonus/utiles/ft_lstadd_back_bonus.c\
			bonus/utiles/ft_lstclear_bonus.c\
			bonus/utiles/ft_split_bonus.c\
			bonus/utiles/ft_lstlast_bonus.c\
			bonus/utiles/ft_strlcpy_bonus.c\
			bonus/instructions/ft_swap_bonus.c\
			bonus/instructions/ft_push_bonus.c\
			bonus/instructions/ft_rotate_bonus.c\
			bonus/instructions/ft_reverse_rotate_bonus.c\
			bonus/utiles/ft_strcmp_bonus.c\
			bonus/utiles/ft_lstsize_bonus.c\
			bonus/utiles/ft_strncmp_bonus.c\
			bonus/utiles/ft_checksorted_bonus.c\
			bonus/utiles/ft_erreur_bonus.c\

OBJ_CHECKER = $(SRC_BONUS:%.c=%.o)

$(NAME) : $(OBJ_FILE)
	@$(CC) $(CFLAGS) -g $(OBJ_FILE) -o $(NAME)

all : $(NAME)

bonus : $(OBJ_CHECKER)
	@$(CC) $(CFLAGS) $(OBJ_CHECKER) -o $(NAME_CHECKER)

clean :
	@rm -rf $(OBJ_FILE) $(OBJ_CHECKER)

fclean : clean
	@rm -rf $(NAME) $(NAME_CHECKER)

re : fclean all bonus

.PHONY : all bonus clean fclean re
