/*Write a menu driven program that implement following operations (using
separate functions) on a linear array:
a) Insert a new element at end as well as at a given position
b) Delete an element from a given whose value is given or whose position
is given
c) To display the elements of the linear array
*/




#include <iostream>
using namespace std;

/*Insert a new element at end as well as at a given position*/
void insert_Element(int* arr,int size,int pos,int element)
{
    arr[size-1]=element;
    arr[pos]=element;
}


/*Delete an element from a given whose value is given or whose position
is given*/
void delete_element_by_index(int* arr,int size,int index)
{
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
}
void delete_element_by_givenElement(int* arr,int size,int element)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            for(int j=i;j<size-1;j++)
            arr[j]=arr[j+1];
            
            return;
        }
        
    }
}

//To display the elements of the linear array
void display_array(int* arr,int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
int main()
{

    return 0;
}