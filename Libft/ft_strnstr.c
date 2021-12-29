/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 17:47:53 by abouvet           #+#    #+#             */
/*   Updated: 2021/12/29 23:07:44 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;
	char		*a;
	char		*b;

	a = (char *)s1;
	b = (char *)s2;
	i = 0;
	if (*b == 0)
		return (a);
	while (len > i && *a)
	{
		j = 0;
		while (a[i + j] == b[j] && len > i + j)
		{
			if (a[i + j] == b[j])
				j++;
			if (j == (unsigned int)ft_strlen(b))
				return (&a[i]);
		}
		i++;
	}
	return (NULL);
}
