#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3,n,i,s(0);
	char v;
	cout<<"Programa que muestra los primeros n terminos de la serie Fibonacci: "<<endl;
	cout<<"Ingresa la cantidad de terminos a mostrar: ";
	cin>>n;
	n1=-1;
	n2=1;
	for(i=1;i<=n;i++){
		n3=n1+n2;
		s=s+n3;
		cout<<n3<<", ";
		n1=n2;
		n2=n3;	
	}
	cout<<"Desea mostrar el resultado de la suma de sus terminos? [s/n]"<<endl;
	cin>>v;
	switch(v){
		case 's':
			cout<<"La suma de los "<<n<<" terminos de la sucesion es: "<<s;
		    break;
        default:
            break;
	}
	return 0;
}