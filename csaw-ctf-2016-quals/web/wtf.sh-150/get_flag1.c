#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main() {
    char flag[128];
    int fd = open("/home/flag1/flag1.txt", O_RDONLY);
    read(fd, flag, sizeof(flag));
    printf("Flag: %s\n", flag);
    return 0;
}
