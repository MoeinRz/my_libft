/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_bzero.c                                                               */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/18 15:04:59 by moeinrz                                  */
/*   Updated: 2022/11/10 17:45:49 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	if (len)
	{
		ft_memset(str, 0, len);
	}
}
