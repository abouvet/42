/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 19:31:24 by abouvet           #+#    #+#             */
/*   Updated: 2021/12/29 10:46:52 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
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
