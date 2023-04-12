#include<bits\stdc++.h>
using namespace std;

void bfs(int **G, int n , int s)

{
    int *visited = new int[n];
    int *distance = new int[n];

    for(int i=0;i<n;i++)
    {
        visited[i] = distance[i]=0;
    }

    queue<int> q;
    q.push(s);
    visited[s] = 1;
    distance[s] = 0;

    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        // adjacent of present node

        for(int i=0;i<n;i++)
        {
            //int nxtadj = G[p][i];

            if(G[p][i] == 1)
            {
                int nxtadj = i;
                visited[nxtadj] = 1;
                q.push(nxtadj);
                distance[nxtadj] = distance[p] +1;

            }

        }


    }
    cout<<"distance from "<<s<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<s<<" to "<<i<<" : "<<distance[i]<<endl;
    }
}
int main ()
{

   // vector<int>*g;
    int nodes;
    int edges;
    cin>>nodes>>edges;
    //g = new vector<int>[nodes];
    int **g = new int *[nodes];
    //int u,v;
    for(int i=0;i<nodes;i++)
    {
       g[i] = new int [nodes];
    }


    for(int i=0;i<nodes;i++)
    {


        for(int j=0;j<nodes;j++)
    {
        g[i][j] = 0;
    }

    }
    int u,v,w;
    for(int i=0;i<edges;i++)
    {

    cin>>u>>v>>w;
    g[u][v] = w;
    g[u][v] = w;

    }

     for(int i=0;i<nodes;i++)
     {
         for(int j=0;j<nodes;j++)
         {
             cout<<g[i][j]<<" ";
         }
         cout<<endl;
     }

 //bfs(g,nodes,0);
return 0;
}
