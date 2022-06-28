/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <abouvet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 18:55:56 by abouvet           #+#    #+#             */
/*   Updated: 2022/06/27 00:50:20 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

char	*ft_uitoa(unsigned int nb)
{
	int		i;
	char	*str;

	i = nbr_len(nb, 10);
	if (i == 0)
		i = 1;
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (i > 0)
	{
		str[--i] = (nb % 10 + '0');
		nb = nb / 10;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int nbr)
{
	char	*str;
	int		len;

	len = 1;
	if (nbr == 0)
		ft_putchar(0 + '0');
	else
	{
		str = ft_uitoa(nbr);
		len = ft_putstr(str);
		free(str);
	}
	return (len);
}
