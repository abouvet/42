/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:28:22 by abouvet           #+#    #+#             */
/*   Updated: 2021/12/29 17:29:32 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*a;

	i = 0;
	a = ((char *)s);
	while (n > 0)
	{
		if (a[i] == (char)c)
			return ((char *)&a[i]);
		i++;
		n--;
	}
	return (NULL);
}
