#include<iostream>
using namespace std;
int main()
{
    int a1[20],large,sum;
    int m,n,i,j;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter Array:\n";
    for(i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    large=a1[0];
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            sum+=a1[j];
        }
        if(sum>large)
        {
            large=sum;
        }
    }
    cout<<"\nOUTPUT: "<<large;
}