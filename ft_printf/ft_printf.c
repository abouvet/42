/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <abouvet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 16:17:58 by abouvet           #+#    #+#             */
/*   Updated: 2022/06/27 13:28:25 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_convert(char c, va_list ptr)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_putchar(va_arg(ptr, int));
	else if (c == 's')
		len = ft_putstr(va_arg(ptr, char *));
	else if (c == 'p')
		len = ft_print_address(va_arg(ptr, unsigned long long));
	else if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(ptr, int));
	else if (c == 'u')
		len = ft_print_unsigned(va_arg(ptr, unsigned int));
	else if (c == 'x')
		len = ft_putnbrbase(va_arg(ptr, int), "0123456789abcdef");
	else if (c == 'X')
		len = ft_putnbrbase(va_arg(ptr, int), "0123456789ABCDEF");
	else if (c == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const	char *str, ...)
{
	va_list	ptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
			len += ft_convert(str[++i], ptr);
		else
		{
			ft_putchar(str[i]);
			len++;
		}
		i++;
	}
	va_end(ptr);
	return (len);
}
