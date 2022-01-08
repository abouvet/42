/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 17:47:53 by abouvet           #+#    #+#             */
/*   Updated: 2022/01/07 10:52:37 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		n;

	i = 0;
	if (!s2[0])
		return ((char *)s1);
	while (s1[i])
	{
		n = 0;
		while (s1[i + n] == s2[n] && (i + n) < len)
		{
			if (!s1[i + n] && !s2[n])
				return ((char *)&s1[i]);
			n++;
		}
		if (!s2[n])
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
