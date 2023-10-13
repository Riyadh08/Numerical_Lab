//False position method

#include<bits/stdc++.h>
using namespace std;
double f(double x){
   // cout<<b<<" "<<c<<endl;
    return x*x-x-2;
}

double fun(double x1,double x2){
    return (x1-(f(x1)*(x2-x1))/(f(x2)-f(x1)));
}

int main(){
    double x1 = 1,x2=3;
    int cnt=0;
    double x0;
    while(cnt<10){
        cnt++;
        x0 = fun(x1,x2);
        // cout<<cnt<<"The value of x0 : "<<x0<<endl;
        double temp = f(x0)*f(x1);
        
        if(temp<0.0){
            x2 = x0;
        }
        else{
            x1 = x0;
           
        }
    }
    cout<<"Final value of x0 : "<<x0<<endl;
    return 0;
}