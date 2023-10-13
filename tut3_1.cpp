//Bisection Method for

#include<bits/stdc++.h>
using namespace std;

double f(double x)
{
	return x*x - 4*x - 10;
}

int main()
{
	// Initial values assumed
	double x1 =-6, x2 = 6;
    
    double x0 ;
    int cnt=0;
    // cout<<"hi"<<endl;
    while(cnt<10){
        cnt++;
        //cout<<"hello"<<endl;
        x0 = (x1+x2)/2;
        if(f(x0)*f(x1) < 0){
            x2 = x0;
        }
        else{
            x1 = x0;
        }
    }
    cout<<x0<<endl;
	return 0;
}
