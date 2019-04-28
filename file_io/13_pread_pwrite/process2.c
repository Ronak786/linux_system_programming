#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd = open("hello.txt", O_RDWR);
	char buffer[10];
	perror("open");

	getchar();
	read(fd, buffer, sizeof(buffer));
	printf("Buffer:%s\n", buffer);
	close(fd);
	return 0;
}
