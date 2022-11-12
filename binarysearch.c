#include<stdio.h>

int binarysearch(int arr[],int size,int element)
{
    int low,high,mid;
     low=0;
     high=size-1;
     
    while(low<=high) //low and high convergers
    {
        mid=(low+high)/2;
        //Start of searching
        
        if(arr[mid]==element)
        {
            return mid;
         }
        
        if(arr[mid]<element)
        {
            low=mid+1;
        }
        
         else
        {
            high=mid-1;
        }
        //End of searching
    }
    return -1;
}


int main()
{
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    int element =2;
    int search= binarysearch(arr,size,element);
     printf("the element %d is in %d",element,search);
     return 0;
}
