/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_atoi.c                                                                */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/18 15:04:59 by moeinrz                                  */
/*   Updated: 2022/11/07 14:04:45 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	long			num;
	long			sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
	i++;
	while (str[i] <= '9' && str[i] >= '0' && str[i] != '\0')
	{
		num = num * 10;
		num = num + str[i] - '0';
		i++;
	}
	return (num * sign);
}
