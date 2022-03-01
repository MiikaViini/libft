/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dectobin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mviinika <mviinika@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:48:10 by mviinika          #+#    #+#             */
/*   Updated: 2022/02/13 15:22:22 by mviinika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	dectobin(int dec)
{
	int		res;
	int		bin[16];
	size_t	i;

	res = 0;
	i = 0;
	while (dec > 0)
	{
		bin[i] = dec % 2;
		dec /= 2;
		i++;
	}
	while (i--)
	{
		printf("%d", bin[i]);
	}
	printf("\n");
}

int	main(void)
{
	int	dec2;
	int	dec;

	dec = 67;
	dec2 = dec >> 1;
	dectobin(dec);
	dectobin(dec2);
	return (0);
}
