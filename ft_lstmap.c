/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika < mviinika@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 10:28:43 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/15 12:50:48 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	if (result == NULL)
	{
		return (NULL);
	}
	if (lst)
	{
		result = f(lst);
		result->next = ft_lstmap(lst->next, f);
		return (result);
	}
	return (NULL);
}
