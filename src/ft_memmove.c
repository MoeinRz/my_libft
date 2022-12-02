/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_memmove.c                                                             */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/29 15:14:38 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	const char	*s;
	char		*d;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, len));
	s = (char *)src;
	d = (char *)dest;
	while (len--)
		d[len] = s[len];
	return (dest);
}
