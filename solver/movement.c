/*
** EPITECH PROJECT, 2019
** dante
** File description:
** solver.c
*/
#include "solver.h"

int up(Maps *map, Info *infos, int random)
{
    if (random == 1) {
        if (infos->y == 0)
            return (1);
        if (map->map_1[infos->y - 1][infos->x] != '*')
            return (1);
        if (map->map_2[infos->y - 1][infos->x] == 'E')
            return (1);
        map->map_1[infos->y - 1][infos->x] = 'o';
        infos->y--;
        return (0);
    }
}

int down(Maps *map, Info *infos, int random, Size_map *size_map)
{
    if (random == 2) {
        if (infos->y == (size_map->size_y - 1))
            return (1);
        if (map->map_1[infos->y + 1][infos->x] != '*')
            return (1);
        if (map->map_2[infos->y + 1][infos->x] == 'E')
            return (1);
        map->map_1[infos->y + 1][infos->x] = 'o';
        infos->y++;
        return (0);
    }
}

int left(Maps *map, Info *infos, int random)
{
    if (random == 3) {
        if (infos->x == 0)
            return (1);
        if (map->map_1[infos->y][infos->x - 1] != '*')
            return (1);
        if (map->map_2[infos->y][infos->x - 1] == 'E')
            return (1);
        map->map_1[infos->y][infos->x - 1] = 'o';
        infos->x--;
        return (0);
    }
}

int right(Maps *map, Info *infos, int random, Size_map *size_map)
{
    if (random == 4) {
        if (infos->x == (size_map->size_x - 1))
            return (1);
        if (map->map_1[infos->y][infos->x + 1] != '*') {
            return (1);
        }
        if (map->map_2[infos->y][infos->x + 1] == 'E')
            return (1);
        map->map_1[infos->y][infos->x + 1] = 'o';
        infos->x++;
        return (0);
    }
}