/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:40:23 by gsever            #+#    #+#             */
/*   Updated: 2021/12/01 12:12:49 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	intermed;

	intermed = *a;
	*a = *b;
	*b = intermed;
}

int	main(void)
{
	int	sayi;
	int	*grandma;

	sayi = 5;
	grandma = &sayi;
	printf("%p\n%d", grandma, *grandma);
}
