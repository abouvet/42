/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <abouvet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 18:19:10 by abouvet           #+#    #+#             */
/*   Updated: 2022/06/28 12:42:18 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# if defined (APPLE)
#  define PTR_NULL "0x0"
# elif linux
#  define PTR_NULL "(nil)"
# endif 

# include<unistd.h>
# include<stdlib.h>
# include<stdio.h>
# include<stdarg.h>
# include<limits.h>
# include<stdint.h>

int		ft_strlen(char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbrbase(int nbr, char *base);
int		ft_print_unsigned(unsigned int nbr);
char	*ft_uitoa(unsigned int nbr);
int		nbr_len(unsigned int nbr, int base);
int		ft_printf(const char *str, ...);
int		ft_print_address(unsigned long long nbr);
void	ft_putnbr_hexa(unsigned long long nbr, char *base);
int		ft_convert(char c, va_list ptr);
int		ptr_len(uintptr_t nbr);
void	print_ptr(uintptr_t nbr, char *base);

#endif
