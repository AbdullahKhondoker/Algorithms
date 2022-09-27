#include <iostream>
using namespace std;
int count(int number, int array[], int length)
{
    int x = 0;
    for(int i = 0; i < length; i++)
        if(array[i] == number)
            x++;
    return x;
}

int main()
{    int num;
    int numbers[10] = {8,4,6,1,6,9,6,1,9,8};
    cout<<"Input a number to search: ";
    cin>>num;
    cout << num << " occurs "
              << count(num, numbers, 10)
              << " times in the array.";
    return 0;
}
