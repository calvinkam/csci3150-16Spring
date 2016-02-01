#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* printPtrAddr(char* ptr)
{
  char *buf = malloc(100);
  sprintf(buf,"%p",ptr);
  return (buf+strlen(buf)-2);
}

int main(int argc,char* argv[])
{
  int i,j;
  char **tmpArgv = argv;
  for(i = 0;i < argc;i++)
  {
    printf("Address of argv element[%d]: %p |\n",i,tmpArgv);
    char *ptr = argv[i];
    printf("After dereferencing [%p]: [%p]\n",tmpArgv,ptr);
    for (j = 0;j < strlen(argv[i]);j++)
    {
      printf("|%3s ",printPtrAddr(ptr++));
    }
    printf("|\n");
    ptr = argv[i];
    for (j = 0;j < strlen(argv[i]);j++)
    {
      printf("|%3c ",*(ptr++));
    }
    printf("|\n");
    printf("=================================\n");
    tmpArgv++;
  }

  return 0;
}
