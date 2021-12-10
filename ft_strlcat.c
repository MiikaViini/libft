/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika < mviinika@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 11:12:45 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/08 15:10:45 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	k;
	size_t	res;
	size_t	j;

	i = ft_strlen((char *)s1);
	j = ft_strlen((char *)s2);
	k = 0;
	res = 0;
	if (n == 0)
	{
		 res = j;
	}
	if ((n <= i + j && !(n >= i + j)) && j + n <= i + j)
		res = j + n;
	if (n + j > i + j)
		res = i + j;
	while (s2[k] && (i + 1) < n)
	{
		s1[i++] = s2[k++];
	}
	s1[i] = '\0';
	return (res);
}
