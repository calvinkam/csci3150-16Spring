#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE (5)
char* printPtrAddr(int* ptr)
{
  char *buf = malloc(100);
  sprintf(buf,"%p",ptr);
  return (buf+strlen(buf)-2);
}
int main(int argc,char *argv[])
{
  char a[SIZE][SIZE];
  int i,j;
  int num = 0;
  for (i = 0;i < SIZE;i++) {
    for(j = 0;j < SIZE;j++)
      printf("|%p ",&a[i][j]);

    printf("\n");
  }


  return 0;
}
