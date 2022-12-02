/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_putnbr_fd.c                                                           */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/29 15:14:38 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	int		i;
	char	str[10];

	num = n;
	if (num == 0)
		ft_putchar_fd('0', fd);
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num = -num;
	}
	i = 0;
	while (num > 0)
	{
		str[i] = num % 10 + '0';
		num = num / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(str[i], fd);
		i--;
	}
}
