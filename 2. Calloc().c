/*
  Binoy Das Gupta
  Dynamic Memory Allocation-calloc()
  05-06-2021
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (double*)calloc(5,sizeof(double));
    if(ptr==NULL)
    {
        printf("Memory Allocation is not successful.\n");
    }
    else
    {
        printf("Memory Allocation is successful.\n");
    }
    return 0;
}
