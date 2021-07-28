#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int arr[20],n,k,i,j;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter K: ";
    cin>>k;
    cout<<"Enter Array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]-k>0)
        {
            arr[i]=arr[i]-k;
        }
        else
        {
            arr[i]=arr[i]+k;
        }
    }

    cout<<"\nOUTPUT: "<<fabs(arr[0]-arr[n-1]);
}