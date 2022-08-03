/* Write a program to demonstrate the implementation of various operations
on a queue represented using a linear linked list (linked queue).
*/
#include <iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    //inserting elements in queue
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // printing all the elements
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    
    //size of an queue
    cout<<q.size()<<endl;

    
    return 0;
}
