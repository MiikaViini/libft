/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika < mviinika@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:03:50 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/08 15:20:49 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	size;
	size_t	i;
	char	*rev;

	i = 0;
	size = ft_strlen(str);
	rev = (char *)malloc(sizeof(char) * (size + 1));
	if (!rev)
	{
		return (NULL);
	}
	while (size--)
	{
		rev[i] = str[size];
		i++;
	}
	rev[i] = '\0';
	return (rev);
}
