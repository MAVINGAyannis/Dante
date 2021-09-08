/*
** EPITECH PROJECT, 2018
** dante
** File description:
** main.c
*/
#include "solver.h"

int random_number(int a, int b)
{
    int i = rand()%(b-a) +a;
    return (i);
}

int count_horiz(char *file)
{
    int i = 0;

    if (file[0] != '*')
        exit(84);
    while (file[i] != '\n')
        i++;
    return (i);
}

int count_size(char *file)
{
    int i = 0;
    int b = 0;

    while (file[i] != '\0') {
        if (file[i] != 'X' && file[i] != '*') {
            if (file[i] != '\n' && file[i] != '\0')
                exit(84);
        }
        if (file[i] == '\n')
            b++;
        i++;
    }
    if (file[i - 1] != '\n')
        b++;
    return (b);
}

void all_malloc(Maps *map, int size_x, int size_y)
{
    malloc_map(map, size_y);
    malloc_map_2(map, size_y);
}

int main(int argc, char **argv, int size_x)
{
    int size_y = 1000;
    Maps maps;
    int i = 0;
    int fd = open(argv[1], O_RDONLY);
    int size_file = size_reader(fd, argv);

    if (fd == -1 || size_file == -1)
        return (84);
    game(fd, &maps, size_file);
    return (0);
}
