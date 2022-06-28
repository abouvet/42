/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <abouvet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 11:32:44 by abouvet           #+#    #+#             */
/*   Updated: 2022/06/27 00:58:59 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
			i++;
	}
	return (i);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			write(1, &str[i++], 1);
		}
	}
	else
	{
		write (1, "(null)", 6);
		i = 6;
	}
	return (i);
}

int	ft_putnbr(int nbr)
{
	char	*str;
	int		len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len = ft_putchar('-');
	}
	str = ft_uitoa(nbr);
	len += ft_putstr(str);
	free(str);
	return (len);
}
