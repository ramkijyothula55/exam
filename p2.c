#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define SIZE 64
// Process p1
int main(int argc, char const *argv[])


    {
    int fd;
    unsigned char buff[SIZE];

    fd = open("mydocument", O_RDONLY);
    read(fd, buff, 64);
    printf("P2: got data %s from P1\n", buff);
    printf("length of the string :",buff);
    close(fd);
    return 0;
}