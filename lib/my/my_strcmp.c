/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    return (1);
}
