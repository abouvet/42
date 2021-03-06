/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 23:07:57 by abouvet           #+#    #+#             */
/*   Updated: 2021/12/30 11:25:24 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*stock;

	stock = malloc(count * size);
	if (!stock)
		return (NULL);
	ft_bzero(stock, count * size);
	return (stock);
}
