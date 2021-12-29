/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 17:31:16 by abouvet           #+#    #+#             */
/*   Updated: 2021/12/29 17:47:25 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*a;
	unsigned char	*b;

	a = ((unsigned char *)s1);
	b = ((unsigned char *)s2);
	i = 0;
	while (n > 0)
	{
		if (a[i] == b[i])
		{
			i++;
			n--;
		}
		else
			return (a[i] - b[i]);
	}
	return (0);
}
