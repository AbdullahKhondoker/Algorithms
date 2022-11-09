#include<iostream>
using namespace std;
class Product {
     public:
char name[30];
int id;
string catagory;
float unit_price;
public:

    void getdata();

    void putdata();


     };

     void Product :: getdata()
     {
         cout<<"Name : ";
         cin>>name;
         cout<<"ID: ";
         cin>>id;
         cout<<"Product Catagory: ";
         cin>>catagory;
         cout<<"Unit Price: ";
         cin>>unit_price;
     }

     void Product :: putdata()
     {
         cout<<"Product Name :"<<name <<endl;
         cout<<"Product Id: "<<id <<endl;
         cout<<"Product Catagory: "<<catagory <<endl;
         cout<<"Product Price: "<<unit_price <<endl;
         cout<<"--------------------"<<endl;
     }

     int main(){
      Product pro[5];

      int z,q;
      cout<<"Enter the number of products: ";
      cin>>z;

      for(q = 0; q<z; q++)
       {
           pro[q].getdata();}

      cout<<"--------Product Data--------------"<<endl;
      for(q = 0; q<z; q++)
        {pro[q].putdata();}


cout<<"--------------Bubble sort----------------------"<<endl;
 int n;
 cout<<"Enter Array Size: ";
 cin>>n;
 float arr[n];
 cout<<"Enter Unit prices in the Array: ";
 for(int i =0; i<n;i++)
 {
 cin>>arr[i];
 }
 int counter=1;

 while (counter<n)
 {
     for(int i=0;i<n-counter;i++)
     {
         if(arr[i]>arr[i+1])
         {
            float temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
         }
     }
     counter++;
 }
 cout<<"Sorted unit prices: ";
 for(int i =0; i<n;i++)

 {
cout<<arr[i]<<" ";
 }cout<<endl;

 cout<<"------------selection sort -----------------"<<endl;
 int n2;

    cout<<"Enter Array Size: ";
    cin>>n2;
    float arr2[n2];
    cout<<"Enter unit prices: ";
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<n2-1;i++)
    {
        int minimum = i;

        for(int j=i+1;j<n2;j++)
        {
           if(arr2[j] < arr2[minimum])
        {   //minimum = j;
            float value = arr2[i];
            arr2[i] = arr2[j];
            arr2[j] = value;

        }
    }

}
cout<<"Sorted unit prices in selection sort: ";
for(int i=0;i<n2;i++)
{
    cout<<arr2[i]<<" ";
}

     return 0;
     }
