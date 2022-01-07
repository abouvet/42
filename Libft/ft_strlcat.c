/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 19:31:24 by abouvet           #+#    #+#             */
/*   Updated: 2022/01/07 10:33:51 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	s_size;
	size_t	d_size;
	size_t	i;	
	size_t	j;

	s_size = ft_strlen(src);
	d_size = ft_strlen(dest);
	j = d_size;
	i = 0;
	if (d_size < size - 1 && size > 0)
	{
		while (src[i] && d_size + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (d_size >= size)
		d_size = size;
	return (d_size + s_size);
}
