#include<iostream>
using namespace std;
long long int factorial(int a);
int main(){
    int m,n,C;
    cout<<"Escribe el valor de m:\n";
    cin>>m;
    cout<<"Escribe el valor de n:\n";
    cin>>n;
    C= factorial(m)/(factorial(n)*(factorial(m-n)));
    cout<<C;
    return 0;
}

long long int factorial(int a){
    int i;
    long long int f(1);
    for (i=2;i<=a;i++){
        f=f*i;
    }
    return f;
}