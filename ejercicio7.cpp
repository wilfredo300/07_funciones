#include<iostream>
using namespace std;
long long int factorial(int a);
int main(){
    int m,n,C;
    cout<<  "------------------------------------------------------------\n";
    cout<<  "\n       Programa para calcular las combinatorias  \n\n"
            "                            m!\n"
            "                C(m,n) = --------\n"
            "                         n!(m-n)!\n"<<endl;
    cout<<  "------------------------------------------------------------\n";
    cout<<  "Escribe el valor de m: ";
    cin>>m;
    cout<<  "Escribe el valor de n: ";
    cin>>n;
    C= factorial(m)/(factorial(n)*(factorial(m-n)));
    cout<<  "La cantidad de combinaciones posibles es: "<<C<<endl;
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