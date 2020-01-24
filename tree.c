/*
** EPITECH PROJECT, 2024
** CPool_Tree
** File description: tree project
*/

#include <unistd.h>

void printblock(int x, int nb1, int size)
{
    int count = 0;
    int space = x / 2 -nb1 /2;

    while (count < space) {
        write(1, " ", 1);
        count++;
    }
    count = 1;
    while (count <= nb1) {
        write(1, "*", 1);
        count++;
    }
    write(1, "\n", 1);
}

void calcxy(int x, int y, int size)
{
    int nb = y;
    int nb1 = 1;
    int red = 0;
    int i = 0;

    for (int count2 = 1; count2 <= size; count2++) {
        for (int count = 1; count <= nb; count++) {
            printblock(x, nb1, size);
            nb1 += 2;
        }
        nb += 1;
        nb1 -= 2;
        if (i %2 == 0) {
            red++;
        }
        nb1 -= red * 2;
        i++;
    }
}

void treetrunk(int x ,int size)
{
    int nb1 = size;
    int nb = 0;
    int count = 0;

    if (nb1 % 2 == 0)
        nb1++;
    nb = (x - nb1) / 2;
    for (int i = 0; i < size; i++) {
        count = 0;
        while (count < nb) {
            write(1, " ", 1);
            count++;
        }
        count = 0;
        while (count < nb1) {
            write(1, "|", 1);
            count++;
        }
        write(1, "\n", 1);
    }
}

void tree(int size)
{
    int x = 7;
    int y = 4;
    int modulo = 0;

    for (int count = 0; count < size - 1; count++) {
        modulo = count % 2;
        x += y + 2 + modulo;
        y++;
    }
    y = 4;
    calcxy(x, y, size);
    treetrunk(x, size);
}
