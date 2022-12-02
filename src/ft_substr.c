/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_substr.c                                                              */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/29 15:14:38 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str1;
	size_t	i;
	size_t	mx;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	mx = ft_strlen(s + start);
	if (mx <= len)
		len = mx;
	str1 = (char *)malloc(len + 1);
	if (!str1)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(str1 + i) = *(s + start + i);
		i++;
	}
	*(str1 + i) = '\0';
	return (str1);
}
