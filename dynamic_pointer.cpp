#include <iostream>
using namespace std;

int main()
{
    int size = 3;
    int *arr;
    arr = new int[size];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}