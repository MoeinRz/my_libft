/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_strjoin.c                                                             */
/*                                                                            */
/*   By: moeinrz <moeinrezaei330@gmail.com>                                   */
/*                                                                            */
/*   Created: 2022/10/13 17:30:45 by moeinrz                                  */
/*   Updated: 2022/11/29 15:14:38 by moeinrz                                  */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//===========================================================================//
//strcpy                                                                     //
//===========================================================================//
char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//===========================================================================//
//strcat                                                                     //
//===========================================================================//
char	*ft_strcat(char *str1, const char *str2)
{
	char	*dest;
	char	*src;

	dest = str1;
	src = (char *)str2;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (str1);
}

//===========================================================================//
//strjoin                                                                    //
//===========================================================================//
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
