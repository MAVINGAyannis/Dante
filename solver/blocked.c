/*
** EPITECH PROJECT, 2019
** dante
** File description:
** solver.c
*/
#include "solver.h"

void blocked_up(Maps *map, Info *infos, Size_map *size_map)
{
    if (infos->y > 0) {
        if (map->map_1[infos->y - 1][infos->x] != '*') {
            infos->blocked++;
            return;
        }
        if (map->map_2[infos->y - 1][infos->x] != '*') {
            infos->blocked++;
            return;
        }
    }
    if (infos->y == 0)
        infos->blocked++;
}

void blocked_down(Maps *map, Info *infos, Size_map *size_map)
{
    if (infos->y < (size_map->size_y - 1)) {
        if (map->map_1[infos->y + 1][infos->x] != '*') {
            infos->blocked++;
            return;
        }
        if (map->map_2[infos->y + 1][infos->x] != '*') {
            infos->blocked++;
            return;
        }
    }
    if (infos->y == (size_map->size_y - 1) &&
    infos->x != (size_map->size_x - 1))
        infos->blocked++;
}

void blocked_left(Maps *map, Info *infos, Size_map *size_map)
{
    if (infos->x > 0) {
        if (map->map_1[infos->y][infos->x - 1] != '*') {
            infos->blocked++;
            return;
        }
        if (map->map_2[infos->y][infos->x - 1] != '*') {
            infos->blocked++;
            return;
        }
    }
    if (infos->x == 0)
        infos->blocked++;
}

void blocked_right(Maps *map, Info *infos, Size_map *size_map)
{
    if (infos->x < (size_map->size_x - 1)) {
        if (map->map_1[infos->y][infos->x + 1] != '*') {
            infos->blocked++;
            return;
        }
        if (map->map_2[infos->y][infos->x + 1] != '*') {
            infos->blocked++;
            return;
        }
    }
    if (infos->x == (size_map->size_x - 1) &&
    infos->y != (size_map->size_y - 1))
        infos->blocked++;
}

int blocked(Maps *map, Info *infos, Size_map *size_map, char *buffer)
{
    infos->blocked = 0;

    blocked_up(map, infos, size_map);
    blocked_down(map, infos, size_map);
    blocked_left(map, infos, size_map);
    blocked_right(map, infos, size_map);
    if (infos->blocked >= 4) {
        map->map_2[infos->y][infos->x] = 'E';
        get_txt_to_map(map, buffer);
        infos->y = 0;
        infos->x = 0;
    }
}