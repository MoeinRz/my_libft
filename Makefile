# /* ************************************************************************** */
# /*                                                                            */
# /*                                                                            */
# /*   Makefile                                                                 */
# /*                                                                            */
# /*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
# /*                                                                            */
# /*   Created: 2022/10/18 15:04:59 by moeinrz                                  */
# /*   Updated: 2022/12/01 18:47:45 by moeinrz                                  */
# /*                                                                            */
# /* ************************************************************************** */

NAME 			=	libft.a
CC				=	cc
FLAGS			=	-Wall -Wextra -Werror
INCLUDES		=	./include
OBJ				=	$(SRC:.c=.o)
SRC 			=	$(shell find . -name "ft_*.c" -type f)

all: $(NAME)
%.o: %.c
	$(CC) $(FLAGS) -I$(INCLUDES) -c $< -o $@
	
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:		all clean fclean re
