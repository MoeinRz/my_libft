/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strlcpy.c                                                             */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/22 14:59:20 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	unsigned int	i;
	unsigned int	s;

	s = ft_strlen(src);
	i = 0;
	if (len != 0)
	{
		while (src[i] != '\0' && i < len - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (s);
}
