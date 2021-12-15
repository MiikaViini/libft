/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika <mviinika>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:28:43 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/15 21:47:42 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;
	t_list	*temp;

	temp = f(lst);
	if (lst)
	{
		result->content = temp->content;
		result->content_size = temp->content_size;
		result->next = ft_lstmap(lst->next, f);
		return (result);
	}
	return (NULL);
}
