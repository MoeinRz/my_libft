/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_isprint.c                                                             */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/22 15:19:18 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int a)
{
	if (a >= ' ' && a <= '~')
	{
		return (a);
	}
	else
		return (0);
}
