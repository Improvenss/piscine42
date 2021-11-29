/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:31:54 by gsever            #+#    #+#             */
/*   Updated: 2021/11/28 23:11:28 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char dig_hund, char dig_ten, char dig_one)
{
    int fake_n;
    char    dig_hund;
    char    dig_ten;
    char    dig_one;
    
    fake_n = n;
    while (fake_n % 2 == 0 && n >= 0)
    {
        write(1, &dig_ten, 1);
        write(1, &dig_one, 1);
        n--;
    }
    while (fake_n % 2 == 1 && n >= 0)
    {
        write(1, &dig_hund, 1);
        write(1, &dig_ten, 1);
        write(1, &dig_one, 1);
        n--;
    }
}

void    ft_doublex(int n) // 2 ve 2'in katları
{
    if (n <= 2)//Döngüyü burada döndür görkem ama içinde write fonksiyonundan kaç tane döndürmek istediğimizi hesaplattıracağız zaten unutma.
    {
        // ft_write(); fonksiyonunu kullanarak
        n = n - 2;
    }
}

void    ft_thirdx(int n) // 3 ve 3'ün katları
{
    if (n <= 0)//Döngüyü burada döndür görkem ama içinde write fonksiyonundan kaç tane döndürmek istediğimizi hesaplattıracağız zaten unutma.
    {
        ft_write();
        
    }
}

void	ft_print_combn(int n)
{
    if (n == 1)
    {
        write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9", 28);//1'den 9'a kadar yazdır.
    }
    else if (n % 2 == 0)// çift sayılar burada hesaplanacak
    {
        ft_doublex(n);
    }
    else //tek sayılar da burada olacak
    {
        ft_thirdx(n);
    }
}

int main(void)
{
    ft_print_combn(1);
}
