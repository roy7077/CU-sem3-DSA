/*Write a program to demonstrate the use of linear and binary search to find
a given element in an array.*/


#include<iostream>
using namespace std;

//function for binary search
int return_index_BS(int* arr,int start,int end,int element)
{
    if(start>end)
    {
        cout<<"Element is not present"<<endl;
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==element)
    return mid;
    
    int a;
    if(element>arr[mid])
    a=return_index_BS(arr,mid+1,end,element);
    else
    a=return_index_BS(arr,start,mid-1,element);
    
    return a;
    
}
//function for linear search
int return_index_LS(int* arr,int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        return i;
    }
    cout<<"Element is not present"<<" ";
    return -1;
}
int main()
{
    //for binary search
    int arr[5]={1,2,3,4,5};
    cout<<return_index_BS(arr,0,4,1)<<" ";
    cout<<endl;
    
    //for linear search
    int arr2[5]={1,2,3,4,5};
    cout<<return_index_LS(arr2,5,2);
    cout<<endl;

    return 0;
}