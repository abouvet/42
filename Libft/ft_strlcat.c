/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 19:31:24 by abouvet           #+#    #+#             */
/*   Updated: 2022/01/06 21:50:56 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	s_size;
	unsigned int	d_size;
	unsigned int	rslt;

	d_size = 0;
	while (dest[d_size])
		d_size++;
	s_size = 0;
	while (src[s_size])
		s_size++;
	rslt = s_size;
	if (size <= d_size)
		rslt += size;
	else
		rslt += d_size;
	s_size = 0;
	while (src[s_size] && d_size + 1 < size)
	{
		dest[d_size] = src[s_size];
		d_size++;
		s_size++;
	}
	return (rslt);
}
