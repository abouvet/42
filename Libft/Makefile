# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouvet <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/28 16:21:21 by abouvet           #+#    #+#              #
#    Updated: 2021/12/29 11:25:20 by abouvet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_bzero.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memset.c  \
		ft_strlen.c \
		ft_isalnum.c \
		ft_isdigit.c \
		ft_memcpy.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \

BONUSSRCS	=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \

CC = gcc

HEADER = libft.h

OBJ = $(SRC:.c=.o)

BONUSOBJ	= ${BONUSSRCS:.c=.o}

NAME = libft.a

RM = rm -f

LIBC = ar -rc

CFLAGS	= -Wall -Wextra -Werror

%.o : %.c
	$(CC) ${CFLAGS} -I. -o $@ -c $?

${NAME} : $(OBJ)
	${LIBC} ${NAME} ${OBJ}

bonus : ${BONUSOBJ}
		${LIBC} ${NAME} ${BONUSOBJ}

all :	${NAME} 
	make bonus

clean :
	${RM} ${OBJ} ${BONUSOBJ}

fclean :	clean
	${RM} ${NAME}

re :	fclean all
