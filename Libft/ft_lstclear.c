/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:38:09 by abouvet           #+#    #+#             */
/*   Updated: 2022/01/06 20:15:32 by abouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*prev;

	tmp = *lst;
	while (tmp != NULL)
	{
		prev = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = prev;
	}
	*lst = NULL;
	return ;
}
