#include<stdio.h> 
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
int removeDuplicates(int arr[], int array_size)
{
    int temp[array_size];
    unsigned int uniqueArrayLen = 0;
    if (array_size <= 1)
    {
        uniqueArrayLen = array_size;
    }
    else
    {
        unsigned int i =0;
        for (i=0; i<array_size-1; i++)
        {
            if (arr[i] != arr[i+1])
            {
                temp[uniqueArrayLen++] = arr[i];
            }
        }
       
        temp[uniqueArrayLen++] = arr[array_size-1];
        
        for (i=0; i<uniqueArrayLen; i++)
        {
            arr[i] = temp[i];
        }
    }
    return uniqueArrayLen;
}
int main()
{
    int arr[] = {14, 15, 25, 31, 32,};
    int i = 0;   
    int arr_size = ARRAY_SIZE(arr);
    unsigned int uniqueArrayLen = removeDuplicates(arr, arr_size);
    
    for (i=0; i<uniqueArrayLen; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
