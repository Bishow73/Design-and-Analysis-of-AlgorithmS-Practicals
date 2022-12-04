#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if (a==0)
    { cout<<"B is GCd"<<endl;
    }
    else if (b==0)
    {
        cout<<"A is GCD"<<endl;
    }
    else
    {
        while (b!=0)
        {
             int r=a%b;
            a=b;
            b=r;
        }
        cout<<"a as gcd"<<endl;
        
    }
}
int main()
{
    int a, b;
    cout<<"enter a";
    cin>>a;
    cout<<"enter b";
    cin>>b;
    gcd(a,b);
    return 0;

}
