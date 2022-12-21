#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int insertionsort(int a[10], int n)
{
    for (int i=0;i<n;i++)
    {
        int temp =a[i];
        int j=i-1;
        while (j>=0 && temp<=a[j])
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    cout<<"\nthe sorted elements are";
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main()
{
    int n;
    int i,a[10];
    cout<< "enter the no of elements you want to enter";
    cin>>n;
    cout<<"enter the element";
    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
cout<<"the element are"<<endl;
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
insertionsort(a,n);

}