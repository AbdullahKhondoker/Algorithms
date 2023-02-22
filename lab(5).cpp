#include<bits/stdc++.h>

using namespace std;
void printList(int *p, int n)
{
    for(int i=0; i<n;i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<"............................................"<<endl;
}

int Partition(int *a, int low, int high)
{
int pivotItem = a[low];
int left = low;
int right = high;

while(left<right)
{
    while(a[left]<=pivotItem) left++;
    while(a[right]>pivotItem) right--;

    if(left<right) swap (a[left],a[right]);


}
swap(a[low],a[right]);

return right;
}

void quicksort(int *a,int low,int high)
{
    int pivotIndex;
    if (low<high)
    {
        pivotIndex = Partition(a,low,high);
        quicksort(a,low,pivotIndex-1);
        quicksort(a,pivotIndex+1,high);

    }
}
int main()
{

int m[] = {2,100,32,5,34,87,21};

int n =7;
printList(m,n);
quicksort(m,0,n-1);
printList(m,n);


return 0;
}
