/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika <mviinika>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:12:45 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/15 20:21:45 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	res;
	size_t	i;

	dest_len = ft_strlen((char *)s1);
	src_len = ft_strlen((char *)s2);
	i = 0;
	res = 0;
	if (size == 0)
	{
		 res = src_len;
	}
	if ((size <= dest_len )
	{
		if (size < dest_len + src_len)
			res = src_len + size;
	}
	else 
		res = dest_len + src_len;
	while (s2[i] && (dest_len + 1) < size)
	{
		s1[dest_len++] = s2[i++];
	}
	s1[dest_len] = '\0';
	return (res);
}
