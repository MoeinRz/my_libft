/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_lstiter.c                                                             */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/29 15:14:38 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
