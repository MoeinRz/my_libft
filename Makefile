/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Makefile                                                                 */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/18 15:04:59 by moeinrz                                  */
/*   Updated: 2022/11/07 14:04:45 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

NAME	=	libft.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
OPTIONS	=	-c -I.
SRC		=	ft_isalnum.c ft_isprint.c ft_putchar_fd.c ft_memcmp.c ft_split.c \
			ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
			ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c \
			ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
			ft_memmove.c ft_putnbr_fd.c  ft_strdup.c ft_strrchr.c \
			ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
			ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
			ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
			ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
			ft_lstnew.c ft_lstsize.c ft_striteri.c ft_strlen.c

BONUS	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
			ft_lstdelone.c ft_lstiter.c ft_lstsize.c \
			ft_lstmap.c ft_lstnew.c ft_lstlast.c

all: $(NAME)

$(NAME): *.o
	ar -crs $(NAME) *.o

*.o: $(SRC)
	$(CC) $(CFLAGS) $(OPTIONS) $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all	

bonus: $(BONUS)
	$(CC) $(CFLAGS) $(OPTIONS) $(BONUS)
	ar -crs $(NAME) *.o

.PHONY: clean fclean all re bonus
