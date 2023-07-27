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

NAME 		=	libft.a
CC			=	cc
FLAGS		=	-Wall -Wextra -Werror
INCLUDES	=	./include
OBJ			=	$(SRC:.c=.o)
SRC 		=	$(shell find . -name "*.c" -type f)

Y	= "\033[33m"
R	= "\033[31m"
G	= "\033[32m"
B	= "\033[34m"
X	= "\033[0m"
UP	= "\033[A"
CUT	= "\033[K"

all: $(NAME)

%.o: %.c
	@echo $(Y)Compiling [$<]...$(X)
	@$(CC) $(FLAGS) -I$(INCLUDES) -c $< -o $@

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo $(G)==================================$(X)
	@echo $(G)Compiled Successfully
	@echo $(G)The output file is [$(NAME)]$(X)
	@echo $(G)==================================$(X)
	@echo

clean:
	@rm -f $(OBJ)
	@echo $(R)These files removed [$(OBJ)]$(X)

fclean: clean
	@rm -f $(NAME)
	@echo $(R)Removed [$(NAME)]$(X)

re: fclean all

.PHONY:		all clean fclean re

