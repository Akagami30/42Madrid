#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int argc, char *argv[])
{
    int     i;
    int     n;

    i = 0;
    n = 1;
    while(argc && argv[argc -1 + n] >= argv[1] )
    {
        if (argv[argc - 1 + n][i] != '\0')
        {
           ft_putchar(argv[argc -1 + n][i]);
           i++;
        }
        else
        {
            ft_putchar('\n');
            n++;
            i = 0;
        }
    }
}