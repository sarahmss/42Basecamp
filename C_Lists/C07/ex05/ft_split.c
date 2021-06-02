#include <stdlib.h>

int display(int nb, char *str, char *result, int index)
{
    unsigned int nbr;
    unsigned int str_length;

    str_length = 0;
    while (str[str_length])
    {
        str_length++;
    }
    if (nb < 0)
    {
        result[index++] = '-';
        nbr = nb * -1;
    }
    else
        nbr = nb;
    if (nbr >= str_length)
        display
}