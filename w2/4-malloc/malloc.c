#include <stdio.h>
#include <stdlib.h>
#define ALL (0)

int main(int argc,char *argv[])
{
	// Here We declare an empty Int pointer...
	int *nPtr;
	// We ask the OS to allocate some memory for us
	nPtr = malloc(sizeof(int));
	if(nPtr == NULL)
		printf("Cannot malloc()!!\n");
	printf("Memory Allocated. nPtr(%p): [%d]\n",nPtr,*nPtr);
	printf("Success..We are going to put 3150 there...\n\n");
	*nPtr = 3150;
	printf("Now: nPtr(%p): [%d]\n",nPtr,*nPtr);
	
	// Remember to Free it after use
	free(nPtr);
	printf("\n\nAfter we free it...\n");
	printf("Now: nPtr(%p): [%d]\n",nPtr,*nPtr);
#if (1 || ALL)	
	// We Declare a new Pointer 
	char *newPtr = malloc(sizeof(char));
	printf("\n\nThe New Pointer located at (%p)\n",newPtr);
	*newPtr = 'a';
	printf("After putting sth, Value of newPtr:%c\n\n",*newPtr);
	printf("Now: nPtr(%p): [%d]\n",nPtr,*nPtr);
#endif
	return 0;
	

}
