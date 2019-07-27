/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboukrou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 22:09:07 by lboukrou          #+#    #+#             */
/*   Updated: 2019/05/12 18:55:25 by lboukrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const	*content, size_t content_size)
{
	t_list		*lst;
	
	if (lst = ((t_list*)malloc(sizeof(t_list))) == NULL)
			return (NULL);
	if (content)
	{
		if (lst->content = ((void*)malloc(sizeof(content))) == NULL)
			return (NULL); 
		ft_memcpy(lst->content, content, content_size);
		lst->content_size = content_size;
	}
	else
	{
		lst->content == NULL;
		lst->content_size = 0;
	}
	lst->next = NULL;
	return (lst);
	
}
