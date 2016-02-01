#include <stdio.h>
#include <stdlib.h>
#define SIZE (6)
int main(int argc,char *argv[])
{
	int *array;
	//Creating a pointer with Size
	array = malloc(sizeof(int)*SIZE);
	int *ptr = array;
	
	int i;
	for(i=0;i<SIZE;i++)
		*(ptr++)=i;

	// Let's access the pointer in Array Notation...
	printf("Printing the Array....\n");
	for(i=0;i<SIZE;i++){
		printf("Element %d: [%d]\n",i,array[i]);
	}
	return 0;
}

