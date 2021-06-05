/*
  Binoy Das Gupta
  Dynamic Memory Allocation-realloc()
  05-06-2021
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,*ptr2;
    ptr1 = (int*)malloc(5*sizeof(int));
    ptr2 = (int*)calloc(5,sizeof(int));
    if(ptr1 == NULL && ptr2 == NULL)
    {
        printf("Memory allocation is not successful.\n");
    }
    else
    {
        printf("Memory allocation is successful.\n");
        ptr1 = realloc(ptr1,40); 
        printf("Memory reallocation is successful.\n");
    }
    return 0;
}