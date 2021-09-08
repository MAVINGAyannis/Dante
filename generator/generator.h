/*
** EPITECH PROJECT, 2018
** dante
** File description:
** generator.h
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../lib/my.h"
#include <time.h>

typedef struct Maps Maps;
struct Maps
{
    char **map_1;
};

void random_star_picker(Maps *map, int x, int y);

void random_star_picker_2(Maps *map, int yy, int xx, int o);

void way(Maps *map, int x, int y, int i, int a);

void initialiser_star(Maps *map, int y, int x);

void placer(Maps *map, int y, int x);

int random_number(int a, int b);

void placer_imperfect(Maps *map, int y, int x);

void print_map(Maps *map, int sizemap);

void malloc_map(Maps *map, int sizemap);