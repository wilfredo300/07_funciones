#include<iostream>
using namespace std;
int sumdiv(int n){
    int i,s(0);
        for (i=1;i<n;i++){
            if(n%i==0){
                s=s+i;
            }
        }
    return s;    
}

int main(){
    int n1,n2,a,b;
    cout<<"xxxxxxxxxPrograma para saber si 2 numeros son amigosxxxxxxxxxx"<<endl;
    cout<<"Ingresa un numero: ";
    cin>>n1;
    cout<<"Ingresa el otro numero: ";
    cin>>n2;
    a=sumdiv(n1);
    b=sumdiv(n2);
    if(a==n2 &&b==n1){
        cout<<"Los numeros son amigos";
    }else{
        cout<<"Los numeros no son amigos";
    }
   
    return 0;

}