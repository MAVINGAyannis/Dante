/*
** EPITECH PROJECT, 2019
** dante
** File description:
** solver.c
*/
#include "solver.h"

void launch_variables(Size_map *size_map, Info *infos, int y, int x)
{
    size_map->size_y = y;
    size_map->size_x = x;
    infos->x = 0;
    infos->y = 0;
    infos->blocked = 0;
    infos->cache = 0;
}

void move(Maps *map, Info *infos, int random, Size_map *size_map)
{
    up(map, infos, random);
    down(map, infos, random, size_map);
    left(map, infos, random);
    right(map, infos, random, size_map);
}

void no_way(Maps *map)
{
    int x = 0;
    int y = 0;
    int way = 0;

    while (map->map_2[y][x] != '\0') {
        if (map->map_2[y][x] == '*')
            way++;
        if (map->map_2[y][x] == '\n') {
            y++;
            x = 0;
        }
        x++;
    }
    if (way == 0)
        exit (84);
}

void solver(Maps *map, int y, int x, char *buffer)
{
    Info info;
    Info *infos = &info;
    Size_map size_maps;
    Size_map *size_map = &size_maps;
    launch_variables(size_map, infos, y, x);
    int random = 0;

    while (map->map_1[size_map->size_y - 1][size_map->size_x - 1] != 'o') {
        map->map_1[0][0] = 'o';
        while (random == infos->cache)
            random = random_number(1, 5);
        infos->cache = random;
        move(map, infos, random, size_map);
        blocked(map, infos, size_map, buffer);
        no_way(map);
    }
    map->map_1[y - 1][x - 1] = 'o';
}
