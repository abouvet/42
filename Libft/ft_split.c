/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <abouvet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 13:16:42 by abouvet           #+#    #+#             */
/*   Updated: 2022/01/04 18:04:50 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_ischar(char c, char stri)
{
	if (stri == c)
		return (1);
	return (0);
}

int	ft_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && ft_ischar(s[i], c))
			i++;
		if (s[i])
			count++;
		while (s[i] && !ft_ischar(s[i], c))
			i++;
	}
	return (count);
}

int	ft_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && !ft_ischar(s[i], c))
		i++;
	return (i);
}

static int	ft_strndup(char **dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	*dest = (char *)malloc(sizeof(char) * (n + 1));
	if (!*dest)
		return (0);
	while (i < n && src[i])
	{
		(*dest)[i] = src[i];
		i++;
	}
	while (i < n)
	{
		(*dest)[i] = '\0';
		i++;
	}
	(*dest)[i] = '\0';
	return (n);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	int		len;
	char	**stck;

	i = 0;
	j = -1;
	if (!s)
		return (NULL);
	words = ft_words(s, c);
	stck = (char **)malloc(sizeof(char *) * (words + 1));
	if (!stck)
		return (NULL);
	while (++j < words)
	{
		while (s[i] && ft_ischar(s[i], c))
			i++;
		len = ft_len(s + i, c);
		i += ft_strndup(&stck[j], s + i, len);
		if (!stck[j])
			return (NULL);
	}
	stck[j] = NULL;
	return (stck);
}
