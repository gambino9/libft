/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboukrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 17:18:12 by lboukrou          #+#    #+#             */
/*   Updated: 2019/05/11 18:27:40 by lboukrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	
	list = *alst;
	if (alst == NULL || del == NULL)
		return ;
	while (*alst)
	{
		del(list->content, list->content_size);
		free(list);
		list = list->next
	}
	(*alst) == NULL;
}
