/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_lstnew.c                                                              */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/29 15:14:38 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*moein;

	moein = (t_list *)malloc(sizeof(t_list));
	if (!moein)
		return (NULL);
	moein->content = content;
	moein->next = NULL;
	return (moein);
}
