#include<iostream>
using namespace std;
int unionn(int arr1[],int arr2[],int m,int n)
{
    int i,j;
    int count=0;
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if (arr1[j]==arr2[i])
                count++;
        }
    }
    return m+n-count;

}

int main()
{
    int m,n,arr1[20],arr2[20];
    cout<<"Enter size of array1:  ";
    cin>>m;
    cout<<"Enter array1 in ascending order\n";
    for(int i=0;i<m;i++)
        cin>>arr1[i];
    cout<<"Enter size of array2:  ";
    cin>>n;
    cout<<"Enter array2 in ascending order\n";
    for(int j=0;j<n;j++)
        cin>>arr2[j];
    cout<<"result: "<<unionn(arr1,arr2,m,n);
    return 0;
}