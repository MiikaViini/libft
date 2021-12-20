/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika <mviinika>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 09:47:44 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/20 13:55:42 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
	{
		*str = *(unsigned char *)src;
		if (*str == (unsigned char)c)
			return ((unsigned char *)str + 1);
		str++;
		src++;
	}
	return (NULL);
}
