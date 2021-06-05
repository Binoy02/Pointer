/*
  Binoy Das Gupta
  Dynamic Memory Allocation-free()
  05-06-2021
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)calloc(5,sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory Allocation is not successful.\n");
    }
    else
    {
        printf("Memory Allocation is successful.\n");
        free(ptr);
        printf("Memory is freed.\n");
    }
    return 0;
}