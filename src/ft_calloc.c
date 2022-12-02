/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_calloc.c                                                              */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/18 15:04:59 by moeinrz                                  */
/*   Updated: 2022/10/30 14:56:24 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitem, size_t size)
{
	char	*str;
	size_t	len;

	len = nitem * size;
	str = malloc(len);
	if (!str)
		return (NULL);
	ft_bzero(str, len);
	return (str);
}
