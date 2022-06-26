/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <abouvet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 12:27:07 by abouvet           #+#    #+#             */
/*   Updated: 2022/06/27 01:23:46 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	nbr_len(unsigned int nbr, int base)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i++;
	while (nbr > 0)
	{
		nbr = nbr / base;
		i++;
	}
	return (i);
}

void	ft_putnbr_hexa(unsigned long long int nbr, char *base)
{
	unsigned int	nb;

	nb = (unsigned int)nbr;
	if (nb > 0)
	{
		ft_putnbr_hexa(nb / 16, base);
		nb = nb % 16;
		ft_putchar(base[nb]);
	}
	return ;
}

int	ft_putnbrbase(int nbr, char *base)
{
	int	len;

	len = 0;
	if (nbr != 0)
		ft_putnbr_hexa(nbr, base);
	else
		ft_putchar(0 + '0');
	len = nbr_len(nbr, 16);
	return (len);
}
