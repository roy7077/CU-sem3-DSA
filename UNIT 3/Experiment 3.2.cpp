/*Write a program to illustrate the implementation of different operations
on a binary search tree.*/

#include <iostream>
using namespace std;
//find the height of a binary tree
int height_of_BT(BinaryTree<int> root)
{
    if(root==NULL)
    retun 0;
    
    int h1=height_of_BT(root->left);
    int h2=height_of_BT(root->right);
    
    return max(h1,h2)+1;
}
//search an element in binary tree
bool search_in_BT(BinaryTree<int> root,int element)
{
    if(root==NULL)
    return false;
    
    if(root->data==element)
    return true;
    
    bool LS=search_in_BT(root->left,element);
    bool RS=search_in_BT(root->left,element);
    
    if(LS or RS)
    return true;
    else
    return false;
}
// print elements level wise
void printLevelWise(BinaryTreeNode<int> *root) 
{
    if(root==NULL)
        return ;
    
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        BinaryTreeNode<int>* front=q.front();
        if(front==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
             q.push(NULL);
            
        }
        else
        {
            cout<<front->data<<" ";
            q.pop();
        if(front->left!=NULL)
            q.push(front->left);
        if(front->right!=NULL)
            q.push(front->right);
        }
        
        
    }
}


int main()
{
    

    return 0;
}
