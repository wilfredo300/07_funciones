#include<iostream>
using namespace std;
float factorial(int a);
int main(){
    int i,n;
    float s;
    s=0;
    cout<<"Ingresa el valor de n:\n";
    cin>>n;
    for(i=1;i<=n;i++){
        s=s+(factorial(i)/(2*i));
    }
    cout<<s;
    return 0;   
}

float factorial(int a){
    int i;
    float f(1);
    for (i=2;i<=a;i++){
        f=f*i;
    }
    return f;
}