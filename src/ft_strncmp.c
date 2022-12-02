/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strcmp.c                                                              */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/29 15:14:38 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dest, const char *src, size_t len)
{
	size_t	j;

	j = 0;
	if (!len)
		return (0);
	while (dest[j] == src[j] && src[j] && j < len - 1)
		++j;
	return ((unsigned char)dest[j] - (unsigned char)src[j]);
}
