/*
** EPITECH PROJECT, 2019
** my_txt_to_map
** File description:
** my_txt_to_map
*/
#include <stdlib.h>
#include "generator.h"

void my_txt_to_map(Maps *map, char *buffer)
{
    int z = 0;
    int o = 0;
    int v = 0;

    while (buffer[v] != '\0') {
        map->map_1[o][z] = buffer[v];
        v++;
        z++;
        if (buffer[v] == '\n') {
            o++;
            v++;
            z = 0;
        }
    }
}

void print_map(Maps *map, int sizemap)
{
    for (int h = 0; h != sizemap; h++) {
        my_printf("%s", map->map_1[h]);
        if (h + 1 != sizemap)
            my_printf("\n");
    }
}

void malloc_map(Maps *map, int sizemap)
{
    int col = 1000;

    map->map_1 = malloc(sizeof(char *) * (sizemap + 2));
    for (int i = 0; i != sizemap; i++)
        map->map_1[i] = malloc(sizeof(char) * (col + 1));
}