#include<iostream>
using namespace std;
int main()
{
    int arr[20],n,i,j,num,count;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter Array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    count=0;
    num=0;
    i=0;
    j=0;
    while(i<n-1){
        num=arr[i];
        i=i+num;
        count++;
    }
    cout<<"\nOUTPUT: "<<count;
}