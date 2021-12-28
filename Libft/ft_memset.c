/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:37:29 by abouvet           #+#    #+#             */
/*   Updated: 2021/12/28 18:00:37 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
/*#include"libft.h"*/

int	*ft_memset(void *b, int c, size_t len)
{
	char	*index;

	index = b;
	while (len)
	{
		*index = c;
		index++;
		len--;
	}
	return (b);
}
