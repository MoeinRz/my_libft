/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_isalnum.c                                                             */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/18 15:04:59 by moeinrz                                  */
/*   Updated: 2022/11/11 17:32:12 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if (ft_isalpha(a) || ft_isdigit(a))
		return (a);
	else
		return (0);
}
