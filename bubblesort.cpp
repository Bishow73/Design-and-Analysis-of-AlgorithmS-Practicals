#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int bubblesort(int a[10], int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j = 0;  j< n-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
        
    }
    cout<<"the sorted elements are";
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
bubblesort(a,n);

}