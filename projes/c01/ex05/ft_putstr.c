/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:26:43 by gsever            #+#    #+#             */
/*   Updated: 2021/12/01 15:34:20 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	value;

	value = -1;
	while (str[value++] != '\0')
	{
		write(1, &str[value], 1);
	}
}

int	main(void)
{
	char	*wizard;

	wizard = "Grandma";
	ft_putstr(wizard);
}
