//Newton and Raphson method
// x2 -5x + 4 = 0
#include<bits/stdc++.h>
using namespace std;

double Func(double x){
    return x*x - 5*x + 4;
}

double DeriveFunc(double x){
    return 2*x - 5;
}

int main(){
    double xn,xn1,h,e;
    cout<<"Enter intial value : "<<endl;
    cin>>xn;
    cout<<"Enter accuracy : "<<endl;
    cin>>e;
    h = Func(xn)/DeriveFunc(xn);
    xn1 = xn-h;
    while (abs(xn1-xn)>=e)
    {
        xn = xn1;
        h = Func(xn)/DeriveFunc(xn);
        xn1 = xn-h;   
    }
    cout<<xn<<endl;
    
    return 0;
}