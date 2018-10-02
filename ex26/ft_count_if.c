#include <stdio.h>

//Return the number of strings in tab that make strlimit return 1.
int     ft_count_if(char **tab, int (*f)(char *))
{
    int count;
    int i;

    count = 0;
    i = 0;
    while (tab[i])
    {
        if ((*f)(tab[i]) == 1)
            count++;
        i++;
    }
    return (count);
}

//Return 1 if str contain more than 10 characters (excluding '\0').
int strlimit(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        printf("LOOP\n");
        if (i >= 10)
            return (0);
        i++;
    }
    return (1);
}

//MAIN
int     main(int argc, char **argv)
{
    
    printf("%d\n", ft_count_if(argv, &strlimit));
    return (0);
}
