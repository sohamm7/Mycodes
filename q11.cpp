#include<iostream>
using namespace std;
int main()
{
    int arr[20],n,i,j,count;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter Array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count=arr[i];
            }
        }
    }
    cout<<"\nOUTPUT: "<<count;
}