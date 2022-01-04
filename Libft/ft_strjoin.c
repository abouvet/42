/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 08:28:26 by abouvet           #+#    #+#             */
/*   Updated: 2022/01/04 18:16:45 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*stck;

	if (!s1 || !s2)
		return (NULL);
	stck = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!stck)
		return (NULL);
	ft_strlcpy(stck, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&stck[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	return (stck);
}

