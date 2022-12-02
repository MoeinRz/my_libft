/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_memcmp.c                                                              */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/29 15:14:38 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			j;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	j = 0;
	while (j < len)
	{
		if (s1[j] != s2[j])
			return ((unsigned char)s1[j] - (unsigned char)s2[j]);
		j++;
	}
	return (0);
}
