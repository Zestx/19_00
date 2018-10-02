#include <stdio.h>

void    ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;

    i = 0;
    while (i < length)
    {
        (*f)(tab[i]);
        i++;
    }
}

void putdigit(int n)
{
    printf("%d\n", n);
}

int     main(void)
{
    int tab[5] = {12, 49, 18, 42, 5};
    
    ft_foreach(tab, 5, &putdigit);
    return (0);
}
