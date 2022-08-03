/*Write a menu driven program that maintains a linear linked list whose
elements are stored in on ascending order and implements the following
operations (using separate functions):
a) Insert a new element
b) Delete an existing element
c) Search an element
d) Display all the elements
*/
#include <iostream>
using namespace std;
// Node class
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

Node* take_input()
{
    // if you dont want to enter data just enter -1
    int data;
    cin>>data;
    Node* head=NULL;
    Node* tail=NULL;
    while(data!=-1)
    {
        Node* newnode=new Node(data);
        if(head==NULL and tail==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else
        {
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}
// Insert a new element
Node* Insert_element(Node* head,int position,int element)
{
    if(head==NULL)
    return NULL;
    
    if(position==0)
    {
        Node* newnode=new Node(element);
        newnode->next=head;
        return newnode;
    }
    Node* temp=Insert_element(head->next,position-1,element);
    head->next=temp;
    return head;
}
// Delete an existing element
Node* delete_element(Node* head,int position)
{
    if(head==NULL)
    return NULL;
    
    if(position==0)
    {
        Node* temp=head->next;
        delete head;
        return temp;
    }
    Node* temp=delete_element(head->next,position-1);
    head->next=temp;
    return head;
}
// Search an element
bool Search_element(Node* head,int element)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==element)
        return true;
        
        temp=temp->next;
    }
    return false;
}
// Display all the elements
void display_elements(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node* head=take_input(); // for taking input
    display_elements(head); // for Display elements
    
    Node* temp=Insert_element(head,5,3); // insert element
    display_elements(temp);              // Display element
    
    Node* temp2=delete_element(head,4);  // delete element
    display_elements(temp2);             // display element
    
    cout<<boolalpha<<Search_element(head,6); // search element true means element is present otherwise not present

    return 0;
}