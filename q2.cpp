#include<iostream>
using namespace std;
void max_min(int arr[],int n)
{
    int i;
    int max=arr[0];
    int min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        else if(arr[i]<min)
            min=arr[i];
    }
    cout<<"Max element= "<<max<<endl;
    cout<<"Min element= "<<min;
}
int main()
{
     int n,i;
    cin>>n;
    int arr[n];
    cout<<"Enter Array:\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max_min(arr,n);
}