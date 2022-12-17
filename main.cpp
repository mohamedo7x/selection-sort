#include <iostream>
#include <conio.h>
using namespace std;
void swap (int &x , int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void selection_sort (int arr[] , int sizeofarr) // fun 
{
    int check;
    for (int i=0 ; i<sizeofarr-1 ; i++)
    {
        check = i;
        for (int j=i+1 ;j<sizeofarr ; j++)
        {
            if (arr[j] < arr[check])
            {
                swap(arr[check] , arr[j]);
            }
        }
    }
}
int main ()
{
    int siz ;
    cout<<"Enter Size Of Array: ";
    cin >> siz;
    int *arr = new int [siz];
    for (int i=0 ; i<siz ; i++)
    {
        cout<<"Enter Array ["<<i<<"]: ";
        cin >> arr[i];
       
    }
    selection_sort(arr , siz);
    for (int i=0 ; i<siz ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    system("pause");
    delete arr;
}