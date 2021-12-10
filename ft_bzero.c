/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika < mviinika@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:19:25 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/08 14:54:58 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*d;

	d = (unsigned char *)s;
	while (n--)
	{
		*d = '\0';
		d++;
	}
}