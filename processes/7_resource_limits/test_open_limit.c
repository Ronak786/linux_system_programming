#include <stdio.h>
#include <fcntl.h>

int main()
{
	int fd;
	int count = 0;
	while(1) 
	{
		fd = open("hello.txt", O_CREAT | O_WRONLY, 0666);
		count++;
		perror("open");
		printf("count:%d\n", count);
	}
	
}

