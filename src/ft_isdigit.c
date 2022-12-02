/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_isdigit.c                                                             */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/22 16:39:10 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a <= '9' && a >= '0')
	{
		return (a);
	}
	else
		return (0);
}
