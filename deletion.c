#include<stdio.h>

void display(int arr[],int n)
{
    for(int i=0;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}

void deletion(int arr[],int size,int index,int capacity)
{
    if(index>capacity)
    {
        printf("not possible\n");
    }
    else
    {   
        for(int i=index;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }

    }
    
}

int main()
{
    int arr[100]={7,9,5,4,2};
    int index=1,size=5,capacity=100;
    display(arr,size);
    deletion(arr,size,index,capacity);
    size-=2;
    display(arr,size);
    return 0;
}
