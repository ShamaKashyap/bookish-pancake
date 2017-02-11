#include <unistd.h>
#include <stdio.h>
#include<string.h>
main()
{
    char *s, buf[1024];
     int fd[2];
     s = "hello world\n";
     pipe(fd);
     write(fd[1], s, strlen(s));
     read(fd[0], buf, strlen(s));
     write(1, buf, strlen(s));
}
