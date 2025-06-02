#include<iostream>
using namespace std;
float factorial(int a);
int main(){
    int i,n;
    float s;
    char op;
    s=0;
     cout<<  "------------------------------------------------------------\n";
    cout<<  "\n       Programa para calcular la suma de la serie: \n\n"
            "                     1!    2!    3!        n!\n"
            "                S = --- + --- + --- +... +---  \n"
            "                     2     4     6        2n\n"<<endl;
    cout<<  "------------------------------------------------------------\n";
    cout<<  "Elige una opcion: \n"
            "   a.Calcular la suma de \"n\" terminos\n"
            "   b.Calcular el termino \"n\""<<endl;
    cin>>op;
    

    cout<<"Ingresa el valor de n: ";
    cin>>n;
    if(op=='a'){
        for(i=1;i<=n;i++){
            s=s+(factorial(i)/(2*i));
        }
        cout<<"El valor de S es: ";
        cout<<s<<endl;
    }else{
        s=factorial(n)/2*n;
        cout<<"El termino "<<n<<" es: "<<s<<endl;
    }
            
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