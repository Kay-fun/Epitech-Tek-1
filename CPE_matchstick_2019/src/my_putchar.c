/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** my_putchar.c
*/

#include "../include/matchstick.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
