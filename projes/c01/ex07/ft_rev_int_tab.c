/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:51:24 by gsever            #+#    #+#             */
/*   Updated: 2021/12/01 17:08:10 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	glass;

	i = 0;
	while (i < (size / 2))
	{
		glass = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = glass;
		i++;
	}
}

int	main(void)
{
	int	tab[5] = {0, 1, 2, 3, 4};
	int	size = 5;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]); 
	return (0);
}
