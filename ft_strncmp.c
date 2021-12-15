/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika <mviinika>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:57:00 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/15 20:21:37 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (*s1 == *s2 && s1 && s2 && n + 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//(s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
//(s1[i] == s2[i] && s1[i] && s2[i] && n + 1)