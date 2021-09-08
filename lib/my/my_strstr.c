/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** my_strstr
*/

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int a = 0;
    int j = 0;
    int c = 0;

    for (int b = 0; to_find[b] != '\0'; b++)
        c++;
    c--;
    while (to_find[i] != '\0') {
        while (str[j] != '\0' && str[j] != to_find[i])
            j++;
        if (str[j] == to_find[i])
            i++;
        if (to_find[i] == '\0')
            return (str + j - c );
    }
}
