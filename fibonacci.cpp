#include<iostream>
using namespace std;
 int main()
 {
    int n, first=0, second=1;
    cout<<"enter the value for n";
    cin>>n;
    int i=3, temp;
    while(i<=n)
    {
        temp =first +second;
        first=second;
        second=temp;
        i++;

    }
    cout<<temp<<" is the required fibonacci number ";
    return 0;
 }