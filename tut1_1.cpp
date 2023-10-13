//Guess Sheidal method

#include<bits/stdc++.h>
using namespace std;
const double e = 0.00001;


int main(){
    string s1 = "27x+6y-z=85";
    string s2 = "6x+15y+2z=72";
    string s3 = "x+y+54z=110";

    double x1 = 3.15;
    double y1 = 3.54;
    double z1 = 1.9131;

    double xn=0,yn=0,zn=0;
    cout<<e<<endl;
    int t=15;
    int i=0;

    while(t--){
        //cout<<"hi"<<endl;
        i++;

        xn = (1.0/27)*(85.0-6*y1+z1);
        yn = (1.0/15)*(72.0-6*xn-2*z1);
        zn = (1.0/54)*(110.0-xn-yn);
        x1 = xn;
        y1 = yn;
        z1 = zn;
        cout<<"Step "<<i<<" :"<<" ";
        cout<<xn<<" "<<yn<<" "<<zn<<endl;

    }

    cout<<"Final output:"<<" ";

    cout<<xn<<" "<<yn<<" "<<zn<<endl;



    

    
    return 0;
}