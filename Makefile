# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aahsan <aahsan@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 10:07:40 by aahsan            #+#    #+#              #
#    Updated: 2022/08/23 12:57:32 by aahsan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c

OBJS	= ${SRCS:.c=.o}
OBJS_BONUS	= ${BONUS:.c=.o}
HEADER	= .
GCC		= gcc -Wall -Wextra -Werror
FILE	= libftprintf.a
RM		= rm -f

.c.o:
	${GCC} -c $< -o ${<:.c=.o} -I ${HEADER}

${FILE}:	${OBJS}
	ar rcs ${FILE} ${OBJS}
	ranlib ${FILE}

all:	${FILE}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${FILE}

re:		fclean all

.PHONY: all clean fclean re
