/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 11:25:58 by abouvet           #+#    #+#             */
/*   Updated: 2021/12/30 12:30:27 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*stock;
	unsigned int	i;

	if (!s)
		return (NULL);
	stock = malloc((len + 1) * sizeof(char));
	if (!stock)
		return (NULL);
	i = 0;
	while (stock && i < len && ft_strlen(s) > start)
	{
		stock[i] = s[start + i];
		i++;
	}
	stock[i] = '\0';
	return (stock);
}
