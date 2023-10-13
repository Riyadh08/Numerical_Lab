//Secant Method
#include<bits/stdc++.h>
using namespace std;

double findVlaueAt(double x){
    return x*x - 4*x - 10;
}
double findX3(double x1,double x2){
    return (x1*findVlaueAt(x2) - x2*findVlaueAt(x1))/(findVlaueAt(x2)-findVlaueAt(x1));
}
int main(){

    double x1,x2,x3;
    cout<<"Enter x1 & x2 "<<endl;
    cin>>x1>>x2;
    x3 = findX3(x1,x2);
    while(abs(x3-x2) >= 0.000001){
        x1 = x2;
        x2 = x3;
        x3 = findX3(x1,x2);
    }
    cout<<"Final Root : "<<x3<<endl;
    
    return 0;
}