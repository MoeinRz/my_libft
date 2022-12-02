/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strlcat.c                                                             */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/22 15:19:15 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	j;
	size_t	k;

	k = 0;
	j = 0;
	while (dest[j] && j < len)
		j++;
	while ((src[k]) && ((j + k + 1) < len))
	{
		dest[j + k] = src[k];
		k++;
	}
	if (j != len)
		dest[j + k] = '\0';
	return (j + ft_strlen(src));
}
