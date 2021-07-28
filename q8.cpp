#include<iostream>
using namespace std;
int main()
{
    int n,a[10],i,sum,j,large;
    cout<<"Enter size:";
    cin>>n;
    cout<<"Enter array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    large=a[0];
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=a[j];
        }
        if(sum>large)
        {
            large=sum;
        }
    }
    cout<<"The sum of largest contiguous array:"<<large;
    
}