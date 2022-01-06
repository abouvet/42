/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 12:30:40 by abouvet           #+#    #+#             */
/*   Updated: 2022/01/06 21:29:22 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*stock;
	int		i;
	int		j;
	int		len;

	if (!s1)
		return (NULL);
	i = 0;
	len = ft_strlen(s1);
	j = len - 1;
	while (ft_strchr(set, s1[i]) != NULL && i <= len / 2)
		i++;
	while (ft_strchr(set, s1[j]) != NULL && j >= len / 2)
		j--;
	if (i > j)
	{
		stock = (char *)malloc(1);
		if (!stock)
			return (NULL);
		stock[0] = '\0';
		return (stock);
	}
	else
		len = j - i;
	return (ft_substr(s1, i, len + 1));
}
