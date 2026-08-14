#include <iostream>
using namespace std;
int main()
{
    int*arr;
    int size;
    cout<<"Enter the size of the integer array:";
    cin>>size;
    
    cout<<"Creating an array of size"
    <<size<<"...";
    arr = new int[size];

    cout<<"\nDynamic allocation of memory for array arr is successful.\n";
    cout<<"\nEnter" << size << "integer elementss:\n";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nnThe elements of the array are:\n"}
    for (int i=0; i<size; i++;)
    {
        cout <<arr[i]<<"";
    
    }

    delete[] arr;
    return 0;
}