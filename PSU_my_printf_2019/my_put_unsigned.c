/*
** EPITECH PROJECT, 2018
** my_put_unasigned
** File description:
** my_put_nbr but unsigned
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int my_putchar(char);

int my_put_unsigned(unsigned int nb)
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
            my_put_unsigned(nb);
            my_putchar(48 + count);
        }
        else
            my_putchar(48 + nb % 10);
    }
}
