/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_memset.c                                                              */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/29 15:14:38 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int a, size_t len)
{
	char	*mem;

	mem = (char *)str;
	while (len)
		mem[--len] = a;
	return (str);
}
