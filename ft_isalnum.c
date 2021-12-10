/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika < mviinika@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:33:00 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/08 14:55:10 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_isalnum(int c)
{
	int	res;

	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}
