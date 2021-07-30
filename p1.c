#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

// Process p1

    int fd;
    int main(int argc, char const *argv[])
{

    fd = open("mydocument", O_WRONLY);
    write(fd, "mydocument\n", 15);
    close(fd);
    return 0;
}