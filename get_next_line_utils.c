/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xhuang <xhuang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:32:37 by xhuang            #+#    #+#             */
/*   Updated: 2024/11/10 17:33:09 by xhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (i);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	n;
	size_t	i;

	i = 0;
	n = count * size;
	str = malloc(n);
	if (!str)
	{
		free (str);
		return (NULL);
	}
	while (i < n)
		((char *)str)[i++] = 0;
	return (str);
}

char	*ft_strchr(char *s, char c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		len1;
	int		len2;

	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = (char *)ft_calloc(len1 + len2 + 1, sizeof(char));
	if (!new)
		return (NULL);
	if (len1 != 0)
		ft_memcpy(new, s1, len1);
	if (len2 != 0)
		ft_memcpy(new + len1, s2, len2);
	new[len1 + len2] = '\0';
	return (new);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
