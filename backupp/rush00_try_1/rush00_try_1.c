/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_try_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 14:11:36 by gsever            #+#    #+#             */
/*   Updated: 2021/11/28 15:52:13 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int x, int y)
{
	int	n;

	n = 0;
	while (n < x)
	{
		if (n == 0 || n == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		n++;
	}
	ft_putchar('\n');
}

void	middle_lines(int x, int y)
{
	int	n;
	int	j;

	n = 0;
	j = 1;
	if (y >= 3)//Orta kısımda 2 satır olursa | yazmamıza gerek yok. Ondan dolayı 3 ve 3'ten büyük olması gerekiyor.
	{
		while (j < y - 2)//Birinci ve son satırda işlem yapmayacağımız için -2 yaptık.
		{
			while (n < x)
			{
				if (n == 0 || n == x - 1)
					ft_putchar('|');
				else
					ft_putchar(' ');
				n++;
			}
			n = 0;
			j++;
			ft_putchar('\n');
		}
	}
}

void	last_line(int x, int y)
{
	int	n;

	n = 0;
	if (y > 1)
	{
		while (n < x)
		{
			if (n == 0 || n == x - 1)
				ft_putchar('o');
			else
				ft_putchar('-');
			n++;
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		first_line(x, y);
		middle_lines(x, y);
		last_line(x, y);
	}
}
