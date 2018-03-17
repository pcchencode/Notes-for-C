
#include<cmath>
#include "iostream"
using namespace std;

int main()
{
    float P,i,n,r,A;
    cout<<"enter the Principal P:";
    cin>> P;
    cout<<"enter the Interest rate in % i:";
    cin>>i;
    cout<<"enter the year n:";
    cin>>n;
    r=1+0.01*i;
    A=P*r* (pow(r,n)-1)/(r-1)  ;
    cout<<"Total="<<A<<endl;
    system("PAUSE");
    return 0;
    
}