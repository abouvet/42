/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <abouvet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:28:51 by abouvet           #+#    #+#             */
/*   Updated: 2022/06/27 01:10:12 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	print_ptr(uintptr_t nbr, char *base)
{
	if (nbr > 0)
	{
		print_ptr(nbr / 16, base);
		ft_putchar(base[nbr % 16]);
	}
}

int	ptr_len(uintptr_t nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		i++;
	while (nbr > 0)
	{
		nbr = nbr / 16;
		i++;
	}
	return (i);
}

int	ft_print_address(unsigned long long nbr)
{
	int	len;

	len = 0;
	if (nbr != 0)
	{
		len = write(1, "0x", 2);
		print_ptr(nbr, "0123456789abcdef");
		len += ptr_len(nbr);
	}
	else
		len = ft_putstr("0x0");
	return (len);
}
