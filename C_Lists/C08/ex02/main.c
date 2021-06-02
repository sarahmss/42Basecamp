#include <stdio.h>
#include "ft_abs.h"

int ft_module(int nbr)
{
    return(ABS(nbr));
}

int     main(void)
{
    printf("%d", ft_module(-50000));
    return(0);
}
