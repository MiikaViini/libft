/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika < mviinika@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:06:45 by mviinika          #+#    #+#             */
/*   Updated: 2021/12/08 14:55:31 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	int	res;

	if (c >= '0' && c <= '9')
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}