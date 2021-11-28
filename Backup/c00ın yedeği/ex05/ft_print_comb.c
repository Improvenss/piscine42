/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 05:30:47 by gsever            #+#    #+#             */
/*   Updated: 2021/11/25 05:48:13 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	dig_hund;
	char	dig_ten;
	char	dig_one;

	dig_hund = '0';
	while (dig_hund <= '7')
	{
		dig_ten = dig_hund + 1;
		dig_hund++;
		while (dig_ten <= '8')
		{
			dig_one = dig_ten + 1;
			dig_ten++;
			while (dig_one <= '9')
			{
				write(1, &dig_hund, 1);
				write(1, &dig_ten, 1);
				write(1, &dig_one, 1);
				write(1, ", ", 2);
				dig_one++;
			}
		}
	}
}
