/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_isascii.c                                                             */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/11 10:32:10 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a < 128)
	{
		return (1);
	}
	else
		return (0);
}
