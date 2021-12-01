/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 05:20:16 by gsever            #+#    #+#             */
/*   Updated: 2021/12/01 05:48:18 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;
	int	*dede;

	a = 33;
	dede = &a;
	printf("Before Value 42: %d\n", a);
	ft_ft(dede);
	printf("After Value 33: %d\n", a);
}
