# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansoulai <ansoulai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/13 16:06:23 by ansoulai          #+#    #+#              #
#    Updated: 2024/05/14 18:41:15 by ansoulai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binary Name:
NAME	=
CLIENT	=	client
SERVER	=	server

#ft_printf Variables:
LIBFTPRINTF	=	ft_printf/libftprintf.a
LIBFTPRINTF_DIR	=	ft_printf

#minitalk variables
SRC_C	=	ft_client.c
SRC_S	=	ft_server.c
OBJ_S	=	ft_server.o
OBJ_C	=	ft_client.o
INC		=	ft_minitalk.h

#Compiling Variables:
CC			=	cc
CFLAG		=	-Wall -Wextra -Werror
RM			=	rm -rf



all: $(LIBFTPRINTF) $(CLIENT) $(SERVER)

$(SERVER): $(OBJ_S) $(INC)
	@$(CC) $(CFLAGS) $(LIBFTPRINTF) -o $@ $(OBJ_S)
	@printf " \033[1;32m[SERVER READY]\033[0m\n"

$(CLIENT): $(OBJ_C) $(INC)
	@$(CC) $(CFLAGS) $(LIBFTPRINTF) -o $@ $(OBJ_C)
	@printf " \033[1;32m[CLIENT READY]\033[0m\n"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(LIBFTPRINTF):
	@$(MAKE) -C $(LIBFTPRINTF_DIR)

clean:
	@$(MAKE) clean -C $(LIBFTPRINTF_DIR)
	@$(RM) $(OBJ_C) $(OBJ_S)
	@printf " \033[31m[CLEANING DONE]\033[0m\n"
	

fclean: clean
	@$(MAKE) fclean -C $(LIBFTPRINTF_DIR)
	@$(RM) $(CLIENT) $(SERVER)
	@printf " \033[31m[FULLCLEAN DONE]\033[0m\n"
	

re: fclean all

.PHONY: all clean fclean re