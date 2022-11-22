/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strlen.c                                                              */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/22 14:37:17 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
