#include<iostream>
using namespace std;


void encoding(string str,int j)
{
    int temp;
    for(int i = j;i<str.size();i = i+j+1){
    temp = str[i];
    str[i] = (char)(temp+j);}
    cout<<"\n\nConverted String:  "<<str;
    cout<<endl<<endl;

}
int main ()
{


int j;
string str;
cout<<"Enter a string : ";
getline(cin,str);
cout<<" Enter an integer: ";
cin>>j;

cout<<"\nSample String: "<<str;
cout<<"\nSample integer : "<<j;
encoding(str,j);


return 0;
}
