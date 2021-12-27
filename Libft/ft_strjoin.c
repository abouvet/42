/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 08:28:26 by abouvet           #+#    #+#             */
/*   Updated: 2021/12/27 21:02:42 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*copy;
	int		k;

	i = 0;
	while (*strs)
	{
		k += ft_strlen(strs[i]);
		i++;
	}
	copy = malloc(sizeof(copy) * (i + ft_strlen(sep) * size - 1));
	if (size == 0)
	{
		*copy = '1';
		return (copy);
		free (copy);
	}
	i = 0;
	while (strs[i])
	{
		if (*strs[i] != 32)
			ft_strcat(&copy, &strs);
		if (*strs[i] == 32)
			ft_strcat(&copy, &sep);
		i++;
	}
	return (copy);
}

int	main(int argc, char **argv)
{
	printf("./ex03/output___said___this___is___a___success :\n");
	printf("%s\n", ft_strjoin(argc, argv, "___"));
}
