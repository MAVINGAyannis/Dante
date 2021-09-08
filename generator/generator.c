/*
** EPITECH PROJECT, 2018
** dante
** File description:
** generator.c
*/
#include "generator.h"

int random_number(int a, int b)
{
    int i = rand()%(b-a) +a;
    return (i);
}

void error_exit(void)
{
    my_printf("USE : ./generator x y | size > 5\n");
    exit (84);
}

void generator(Maps *map, int y, int x)
{
    malloc_map(map, y);
    placer_imperfect(map, y, x);
    initialiser_star(map, y, x);
}

int main(int argc, char **argv)
{
    if (argc > 4)
        error_exit();
    int x = my_getnbr(argv[1]);
    int y = my_getnbr(argv[2]);
    Maps maps;
    Maps *map = &maps;
    int i = 1;
    int a = 1;

    if (x < 5 || y < 5)
        error_exit();
    generator(map, y, x);
    if (argc == 4) {
        if (my_strcmp(argv[3], "perfect") == 1) {
            placer(map, y, x);
            initialiser_star(map, y, x);
    }
}
    print_map(map, y);
    return (0);
}
