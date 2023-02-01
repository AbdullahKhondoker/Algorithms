#include<bits/stdc++.h>
using namespace std;

int main()
{

cout<<"Welcome to Lab 2"<<endl;

  //Allocation of memory(heap)

  int row;
  int column;
  cout<<"Enter row and column: "<<endl;
  cin>>row>>column;
  int **m = new int *[row];
  for(int i= 0;i<row;i++)
  {
      m[i] = new int [column];
  }
  //data input
  for(int i= 0;i<row;i++)
  {
      for(int j= 0;j<column;j++)
      {
          m[i][j] = 10;
      }
  }
  //data output
  for(int i= 0;i<row;i++)
  {
      for(int j= 0;j<column;j++)
      {
          cout<<m[i][j]<< " ";
      }
      cout<<endl;
  }

return 0;
}
