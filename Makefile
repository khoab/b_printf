# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbui <kbui@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/19 13:42:34 by kbui              #+#    #+#              #
#    Updated: 2018/09/22 20:14:58 by kbui             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS ?= -Wall -Wextra -Werror
NAME ?= b_printf

SRC := \
	pf_put.c \
	pf_va.c

OBJ := $(SRC:.c=.o)
CFLAGS += -MMD -MP

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o -g $(SRC)

-include $(OBJ:.o=.d)

clean:
	$(RM) $(OBJ) $(OBJ:.o=.d)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
