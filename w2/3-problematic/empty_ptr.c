#include <stdio.h>
#include <stdlib.h>
#define ALL (0)

int main(int argc,char *argv[])
{
#if (1 || ALL)
	int i = 3150;
	int *nPtr = &i;
	printf("-------- We Declare a nPtr Pointing to i...--------\n");
	// We Print Our Pointer Like This.....
	printf("The value of nPtr(%p) is [%d].\n",nPtr,*nPtr);
#endif
#if (1 || ALL)
	int *jPtr;
	printf("The value of jPtr(%p) is [%d].\n",jPtr,*jPtr);
	printf("-------- We are putting 1234 to *jPtr...--------\n");
	*jPtr = 1234;
#endif 
	return 0;
}
