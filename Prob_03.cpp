#include<iostream>

using namespace std;

int main()
{
    int i,j,a[50]={1,4,6,3,6,9,1};//size;

  cout<<"Stored Integers in Array : "<<endl;

  for(i=0;i<7;i++)
  {
  cout<<" "<<a[i]<<" ";
  }
  cout<<"\n";
  cout<<"Duplicate Values in Given Array are : "<<endl;
  for(i=0; i<7; i++)
   {
    for(j=i+1;j<7;j++)
    {
    if(a[i]==a[j])
    {
    cout<<" "<<a[i]<<" ";
    }

   }
   }
  return 0;
 }
