/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 15:16:15 by abouvet           #+#    #+#             */
/*   Updated: 2022/01/03 22:30:13 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0 || n == 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return i;
}

char	*ft_make(int len, char *tmp, int n)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (n < 0)
	{
		tmp[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	if (nb == 0)
		tmp[0] = '0';
	while (nb > 0)
	{
		tmp[len - 1 - i] = '0' + (nb % 10);
		nb /= 10;
		i++;
	}
	tmp[len] = '\0';
	return (tmp);
}

char *ft_itoa(int n)
{
	int		len;
	char	*tmp;

	len = ft_count(n);
	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	return (ft_make(len, tmp, n));
}
 
/*
#include<stdio.h>
int	main()
{
	printf("FT_ITOA: %s %d", ft_itoa(-799), ft_count(-799));
	return (0);
}*/
