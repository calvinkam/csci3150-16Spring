#include <stdio.h>

int main(int argc,char *argv[])
{
	int a = 5;
	int numArray[a];

	printf("Size of numArray = [%d]\n",sizeof(numArray)/sizeof(int));
	return 0;
}
