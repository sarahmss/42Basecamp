#include <stdlib.h>
#include <stdio.h>
// binario, decimal, hexadecimal
int ft_intlen(int num);
int	ft_atoi(char *str);
int ft_strlen(int num);
char *ft_itoa(int numb, char *result);


char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    char *result;
    int numb;
    if (!(result = malloc((ft_intlen(numb) + 1))))
      return (NULL);
    numb = ft_atoi(nbr);
    result = ft_itoa(numb, result);
    return(result);

}

int main(void)
{
    char *nbr;
    char *result;
    int numb;

    nbr = "-+--2147483648";

    if (!(result = malloc((ft_intlen(numb) + 2))))
      return (0);
    numb = ft_atoi(nbr);
    result = ft_itoa(numb, result); 
    printf("%d\n", numb);
    printf("%s\n", result);
}