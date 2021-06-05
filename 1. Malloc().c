#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
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