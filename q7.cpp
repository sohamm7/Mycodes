#include<iostream>
using namespace std;
int main()
{
    int arr[20],m,k;
     cout<<"Enter size of array1:  ";
    cin>>m;
    cout<<"Enter array1 in ascending order\n";
    for(int i=1;i<=m;i++)
        cin>>arr[i];
    k=0;
    for(int i=m;i>=1;i--)
    {
        if(i==m)
        {
            k=arr[i];
        }
        arr[i]=arr[i-1];
        if(i==1)
        {
            arr[i]=k;
        }
    }
    cout<<"ty:\n";
    for(int i=1;i<=m;i++)
    {
         cout<<arr[i]<<"\n";
    }
    

}