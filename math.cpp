#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //compound interest
    double A,P,r,t,n;

    cout<<"Enter the value of  Principal(P), Annual interest rate(r),  compounding frequency per year(n), time(t):-"<<endl;
    cout << "P:";
    cin>> P;
    cout<<"r:";
    cin>>r;
    cout<<"n:";
    cin>>n;
    cout<<"t:";
    cin>>t;

    A= P*pow(1+r/n, n*t);

    cout<<"The total amount (A) is:"<<A<<endl;

    //quadratic equation
    double a,b,c,D,root1,root2;

    cout<<"Enter the coeff of your quadratic equation:-"<<endl;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"c:";
    cin>>c;

    D = pow(b,2) - 4*a*c;

    if(D>=0){
        root1 = (-b-sqrt(D))/2*a;
        cout<<"root1"<<root1<<endl;
        root2 = (-b+sqrt(D))/2*a;
        cout<<"root2"<<root2<<endl;

    }else{
        cout<<"No real roots(D<0)"<<endl;
    }
    
    // max of two numbers
    cout<<"Enter two numbers to  find max:-"<<endl;
    int x,y;
    cout<<"x:";
    cin>>x;
    cout<<"y:";
    cin>>y;

    if(x>y){
        cout<<"Max number is: "<<x<<endl;
        
    }else{
        cout<<"Max number is: "<<y<<endl;

    }
    

    //max of three numbers
    cout<<"Enter any three numbers:-"<<endl;

    int m,q,o,p;

    cout<<"m:";
    cin>>m;
    cout<<"q:";
    cin>>q;
    cout<<"o:";
    cin>>o;

    if(m>q){
        p = m;
    }else{
        p = q;
    }

    if(o>p){
        cout<<"Max number is: "<<o<<endl;
    }else{
        cout<<"Max number is: "<<p<<endl;
    }

return(0);

}