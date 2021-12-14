/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** task07
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char);

int my_put_nbr(int nb)
{
    int	count;
    
    if (nb < 0)
    {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0)
    {
        if (nb >= 10)
	{
            count = (nb % 10);
            nb = (nb - count) / 10;
            my_put_nbr(nb);
            my_putchar(48 + count);
        }
        else
            my_putchar(48 + nb % 10);
    }
}
