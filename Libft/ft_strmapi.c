/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <abouvet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:25:42 by abouvet           #+#    #+#             */
/*   Updated: 2022/01/05 13:39:14 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	int					len;
	char				*stck;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	stck = malloc(sizeof(char) * (len + 1));
	if (!stck)
		return (NULL);
	while (i < size)
	{
		stck[i] = f(i, s[i]);
		i++;
	}
	s[i] = '\0';
	return (stck);
}
