#include<iostream>
using namespace std;
 int main()
 {
    int i,n;
    long factorial=1.0;
    cout <<"enter a positive integer  ";
    cin>>n;
    for(i=1;i<=n;i++)
    factorial = factorial*i;

    cout<<"the factorial of"<<n<<"is"<<factorial;
    return 0;
    

 }