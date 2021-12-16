/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika < mviinika@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:09:10 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/16 14:20:53 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	int		k;
	size_t	strlen;

	k = 0;
	strlen = ft_strlen((char *)s);
	fresh = (char *)malloc(sizeof(char) * (len + 1));
	if (!fresh)
	{
		return (0);
	}
	while (len--)
	{
		fresh[k++] = s[start++];
	}
	fresh[k] = '\0';
	return (fresh);
}

/*if (*s == '\0' || !fresh || strlen <= start)
	{
		return (NULL);
	}*/
