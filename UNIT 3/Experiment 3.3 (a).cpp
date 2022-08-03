/*Write a program to illustrate the traversal of graph using
a) Breadth-first search
*/

#include <iostream>
#include <queue>
using namespace std;

void print(bool **edges, long long v, long long sv, bool *visited)
{
    queue<long long> pendingVertices;
    pendingVertices.push(sv);
    visited[sv] = true;
    while (!pendingVertices.empty())
    {
        int front=pendingVertices.front();
        pendingVertices.pop();
        cout <<front<< " ";
        for (long long i = 0; i < v; i++)
        {
            if (i == front)
                continue;
            if (visited[i])
                continue;
            if (edges[front][i])
            {
                pendingVertices.push(i);
                visited[i] = true;
            }
        }
        
    }
}

int main()
{
    
    long long v, e;
    cin >> v >> e;
    bool **edges = new bool *[v];
    for (long long i = 0; i < v; i++)
    {
        edges[i] = new bool[v];
        for (long long j = 0; j < v; j++)
        {
            edges[i][j] = false;
        }
    }
    for (long long i = 0; i < e; i++)
    {
        long long start, end;
        cin >> start >> end;
        edges[start][end] = true;
        edges[end][start] = true;
    }
    bool *visited = new bool[v];
    for (long long i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (long long i = 0; i < v; i++)
    {
        if (!visited[i])
            print(edges, v, i, visited);
    }
    delete[] visited;
    for (long long i = 0; i < v; i++)
        delete edges[i];
        delete[] edges;
        return 0;
}

