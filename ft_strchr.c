/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika <mviinika>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:18:23 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/20 13:57:46 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	ch;

	ch = (char)c;
	str = (char *)s;
	while (*str != ch)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}
