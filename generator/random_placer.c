/*
** EPITECH PROJECT, 2019
** dante
** File description:
** generator/random_placer.c
*/
#include "generator.h"

void random_star_picker_2(Maps *map, int yy, int xx, int o)
{
    if (o > 6)
        map->map_1[yy][xx] = '*';
    else if (o < 6)
        map->map_1[yy][xx] = 'X';
}

void random_star_picker(Maps *map, int x, int y)
{
    int xx = 0;
    int yy = 0;
    int o = 0;

    while (map->map_1[yy][0] != '\0') {
        while (map->map_1[yy][xx] != '\n') {
            o = random_number(0, 11);
            if (map->map_1[yy][xx] != '*')
                random_star_picker_2(map, yy, xx, o);
            xx++;
        }
        yy++;
        xx = 0;
    }
}

void initialiser_star(Maps *map, int y, int x)
{
    map->map_1[0][0] = '*';
    map->map_1[y - 1][x - 1] = '*';
}

void placer_imperfect(Maps *map, int y, int x)
{
    int x_one = 0;
    int y_one = 0;
    int a = 0;

    for (int y_one = 0; y_one < y; y_one++) {
        if (y_one % 2 == 0) {
            for (x_one = x_one; x_one < x; x_one++)
                map->map_1[y_one][x_one] = 'X';
            a = rand()%x_one;
            map->map_1[y_one][a] = '*';
            while (a = 0 || map->map_1[y_one][a] == '*')
                a = rand()%x_one;
            map->map_1[y_one][a] = '*';
        } else
            for (x_one = x_one; x_one < x; x_one++)
                map->map_1[y_one][x_one] = '*';
        map->map_1[y_one][x_one] = '\0';
        x_one = 0;
    }
}

void placer(Maps *map, int y, int x)
{
    int x_one = 0;
    int y_one = 0;
    int a = 0;

    for (int y_one = 0; y_one < y; y_one++) {
        if (y_one % 2 == 0) {
            for (x_one = x_one; x_one < x; x_one++)
                map->map_1[y_one][x_one] = 'X';
            a = rand()%x_one;
            map->map_1[y_one][a] = '*';
        } else
            for (x_one = x_one; x_one < x; x_one++)
                map->map_1[y_one][x_one] = '*';
        map->map_1[y_one][x_one] = '\0';
        x_one = 0;
    }
}
