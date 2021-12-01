/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 15:44:09 by gsever            #+#    #+#             */
/*   Updated: 2021/12/01 15:50:06 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	value;

	value = 0;
	while (str[value] != '\0')
	{
		value++;
	}
	return (value);
}

int	main(void)
{
	char	*paper;

	paper = "Grandpa";
	printf("%d", ft_strlen(paper));
}
