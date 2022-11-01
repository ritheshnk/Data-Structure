#include<stdio.h>

void display(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}

int insertion(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity)   //size is noihting but the number of ele in array whereas capacity is whole capacity
    {
        return -1;
    }

    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[index]=element;
    return 1;

}



int main()
{
    int arr[100]={7,22,54,69,32};
   int size= 5,element=45,capacity=100,index=3;
    display(arr,size);
    insertion(arr,size,element,capacity,index);
    size+=1;
    display(arr,size);
}