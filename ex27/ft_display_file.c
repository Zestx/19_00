#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void    fprint(int fdin, int fdout)
{
    char buff;

    buff = 'a';
    while(read(fdin, &buff, 1))
        write(fdout, &buff, 1);
}

int     main(int argc, char **argv)
{
    int fd;

    if (argc == 1)
        write(2, "Filename missing.\n", 19);
    else if (argc > 2)
        write (2, "Too many arguments.\n", 20);
    else if (argc == 2)
    {
        fd = open(argv[1], O_RDONLY);
        if (fd == -1)
        {
            write(2, "Failed to open file.\n", 21);
            return (1);
        }
        fprint(fd, 1);
        if (close(fd) == -1)
        {
            write(2, "Failed to close file.\n", 22);
            return (1);
        }
    }
    return (0);
}
