#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char *ft_create_str(int size, char **strs, char *sep)
{
    char    *str;
    int     len;
    int     i;

    len = 0;
    i = 0;
    while (i < size)
    {
        len += ft_strlen(strs[i]);
        i++;
    }
    len += ft_strlen(sep) * (size - 1);
    if (size <= 0)
        len = 1;
    if(!(str = (char *)malloc(len)))
        return(0);
    return(str);
}   
char *ft_strjoin(int size, char **strs, char *sep)
{
    char *str_f;
    int     i;
    int     j;
    int     k;
    str_f = ft_create_str(size, strs, sep);
    i = -1;
    k = 0;
    while (++i < size)
    {
        j = 0;
        while (strs[i][j] != '\0')
        {
            str_f[k++] = strs[i][j];
            j++;
        }
        j = 0;
        while (sep[j] && i != size - 1)
        {
            str_f[k++] = sep[j];
            j++;
        }
    }
    str_f[k] = '\0';
    return (str_f);
}

int main()
{
    char *str1 = "porra ate na transa";
    char *str2 = "voce nao larga o lansa";
    char *strs[2];
    strs[0] = str1;
    strs[1] = str2;
    printf("%s", ft_strjoin(2, strs, "***"));
}