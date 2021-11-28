//
//  main.c
//  ft_print_comb
//
//  Created by Gorkem Sever on 11/25/21.
//

#include <unistd.h>
/*
void ft_print_numbs(int a, int b, int c)
{
    //char *numbers;
    //numbers = "0123456789";
}

*/

void ft_print_comb(void)
{
    char dig_hund = '0';
    char dig_ten = '1';
    char dig_one = '2';
 //   char a = 0, b = 0, c = 0;
    
    while (dig_hund <= '7')
    {
        dig_ten = dig_hund + 1;
        while (dig_ten <= '8')
        {
            dig_one = dig_ten + 1;
            while (dig_one <= '9')
            {
                write(1, &dig_hund, 1);
                write(1, &dig_ten, 1);
                write(1, &dig_one, 1);
                write(1, ", ", 2);
                dig_one++;
            }
            dig_ten++;
        }
        dig_hund++;
    }
}


int main(void)
{
    ft_print_comb();
}
