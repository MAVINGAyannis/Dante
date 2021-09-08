/*
** EPITECH PROJECT, 2018
** dante
** File description:
** solver.h
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../lib/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct Info Info;
struct Info
{
    int y;
    int x;
    int blocked;
    int cache;
};

typedef struct Size_map Size_map;
struct Size_map
{
    int size_y;
    int size_x;
};

typedef struct Maps Maps;
struct Maps
{
    char **map_1;
    char **map_2;
};

int random_number(int a, int b);

int game(int fd, Maps *maps, int size_file);

int size_reader(int fd, char **argv);

int count_horiz(char *file);

int count_size(char *file);

void solver(Maps *map, int sizemap, int size_x, char *buffer);

void malloc_map(Maps *map, int sizemap);

void malloc_map_2(Maps *map, int sizemap);

void get_txt_to_map(Maps *map, char *buffer);

void get_txt_to_map_2(Maps *map, char *buffer);

void print_map(Maps *map, int sizemap);

void move(Maps *map, Info *infos, int random, Size_map *size_map);

int up(Maps *map, Info *infos, int random);

int down(Maps *map, Info *infos, int random, Size_map *size_map);

int left(Maps *map, Info *infos, int random);

int right(Maps *map, Info *infos, int random, Size_map *size_map);

int blocked(Maps *map, Info *infos, Size_map *size_map, char *buffer);

void blocked_up(Maps *map, Info *infos, Size_map *size_map);

void blocked_down(Maps *map, Info *infos, Size_map *size_map);

void blocked_left(Maps *map, Info *infos, Size_map *size_map);

void blocked_right(Maps *map, Info *infos, Size_map *size_map);

void launch_variables(Size_map *size_map, Info *infos, int y, int x);

void all_malloc(Maps *map, int size_x, int size_y);

void no_way(Maps *map);