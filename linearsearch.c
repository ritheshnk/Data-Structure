
//WITHOUT USING FUNTION
#include<stdio.h>

void main()
{
    int arr[100]={5,7,6,9,4,2,3};
    for(int i=0;i<100;i++)
    {
        if(arr[i]==5)
        {
            printf("element found in a[%d]",i);
            break;
        }
        else{
            printf(" not found ");
        }
    }
}


// WITH USING FUNTION
#include<stdio.h>

int linearsearch(int arr[],int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
        
    }
}
int main()
{
     int arr[]={1,2,3,4,56,7,8,9};
     int size=sizeof(arr)/sizeof(int);
     int element=8;
     int index_of_searched_element=linearsearch(arr,size,element);
     printf("the element %d is in %d",element,index_of_searched_element);
     return 0;
}