/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 09:50:41 by abouvet           #+#    #+#             */
/*   Updated: 2022/01/07 11:22:36 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && n > i)
	{
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		else if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		else
			i++;
	}
	return (0);
}
