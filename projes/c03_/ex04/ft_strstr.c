/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 21:00:15 by gsever            #+#    #+#             */
/*   Updated: 2021/12/09 01:14:41 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//"str" nin icinden "find" i bul. Kendisi ile birlikte sonrakileri yazdir.
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
//ctrl+f ---> Same :)
int	main()
{
	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char find[] = "2021";
	printf("%s", ft_strstr(str, find));
}
