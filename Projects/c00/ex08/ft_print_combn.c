/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:31:54 by gsever            #+#    #+#             */
/*   Updated: 2021/11/27 21:59:35 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_write(char p)
{
	write(1, &p, 1);
}

void ft_times(int n)
{
	while (n-- >= 0)
	{
		ft_write(&i);
	}
	i--;
}
void	ft_print_combn(int n)
{
	char i;

	i = n + 1;
	if (n > 0 && n < 10)
	{
		while (i-- >= 0)//
		{
			while ()
			{
				ft_times(n);
			}	
		}
	}
}
