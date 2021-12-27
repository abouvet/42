/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:37:29 by abouvet           #+#    #+#             */
/*   Updated: 2021/12/28 00:17:38 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void	*ft_memset(void *b, int c, size_t len)
{
	char *index;

	index = b;
	while (len)
	{
		*index = c;
		index++;
		len--;
	}
	return (b);
}


/*void	*ft_memset(void *b, int c, size_t len)
{
	size_t index;

	index = 0;
	while (index < len)
		((unsigned char *)b)[index++] = c;
	return (b);
}
*/

/*
void	*ft_memset(void *b, int c, size_t len)
{
	char	*start;

	if (b == NULL)
		return (NULL);
	start = b;
	while (len)
	{
		*start = c;
		start++;
		len--;
	}
	return (b);
}
*/

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 5;
    int length;

    /* Display the initial values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    /* Reset the memory bloc */
    ft_memset( array, 0, size );

    /* Display the new values */
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n");

    return 0;
}
