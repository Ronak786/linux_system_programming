/*What is the output of this progarm?*/
#include<stdio.h>
#include<unistd.h>

int main()
{
	execl("/bin/ls","ls",NULL);
	return 0;
}
