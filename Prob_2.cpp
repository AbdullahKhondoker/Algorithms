#include<iostream>

using namespace std;

int main()
{
   int arr1[10]={1,2,3,4,5,6,7,8,9,10}, arr2[10]={2,4,6,8,10,12,14,16,18,20}, arr3[10], i, j, k=0, x, z;

   for(i=0; i<10; i++)
   {
      for(j=0; j<10; j++)
      {
         if(arr1[i]==arr2[j])
         {
            z = 0;
            for(x=0; x<k; x++)
            {
               if(arr1[i]==arr3[x])
                  z++;
            }
            if(z==0)
            {
               arr3[k] = arr1[i];
               k++;
            }
            //else {}(cout<<"No Common Element")
         }
      }
   }

   cout<<"Common Elements are:\n";
   for(i=0; i<k; i++){
      cout<<arr3[i]<<" ";
  if(k==0) {
    cout<<"No Common Elelments Found!!"<<endl;
  }
   }
   return 0;
}
