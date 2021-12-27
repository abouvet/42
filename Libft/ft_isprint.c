/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:47:27 by abouvet           #+#    #+#             */
/*   Updated: 2021/12/27 18:44:44 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str < 127)
			str++;
		else
			return (0);
	}
	return (1);
}
