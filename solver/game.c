/*
** EPITECH PROJECT, 2019
** CPE_dante_2019
** File description:
** file.c
*/
#include "solver.h"

int game(int fd, Maps *maps, int size_file)
{
    char file[size_file + 1];
    int size_x = 0;
    int size_y = 0;

    read(fd, file, size_file);
    file[size_file] = '\0';
    close(fd);
    size_x = count_horiz(file);
    size_y = count_size(file);
    all_malloc(maps, size_x, size_y);
    get_txt_to_map(maps, file);
    get_txt_to_map_2(maps, file);
    solver(maps, size_y, size_x, file);
    print_map(maps, size_y);
}