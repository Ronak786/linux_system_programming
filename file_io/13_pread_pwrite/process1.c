#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd = open("hello.txt", O_RDWR);
	perror("open");
	pwrite(fd, "hello", sizeof("hello"));
	close(fd);
	return 0;
}
