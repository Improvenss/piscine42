/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:53:20 by gsever            #+#    #+#             */
/*   Updated: 2021/12/01 06:26:41 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	a;
	int	*dede1, *dede2, *dede3, *dede4, *dede5, *dede6, *dede7, *dede8, *dede9;

	a = 31;
	dede1 = &a;
	dede2 = &dede1;
	dede3 = &dede2;
	dede4 = &dede3;
	dede5 = &dede4;
	dede6 = &dede5;
	dede7 = &dede6;
	dede8 = &dede7;
	dede9 = &dede8;
	printf("First (31): %d\n", a);
	ft_ultimate_ft(dede9);
	printf("First (31): %d\n", a);
}
