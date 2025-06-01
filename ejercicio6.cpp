#include<iostream>
using namespace std;
bool esprimo(unsigned int n){
	int i,cp;
	cp=1;
	for(i=2;i<=n;i++){
		if(n%i==0){
			cp++;
		}
	}
	if(cp==2){
		return true;
	}else{
		return false;
	}
}

int main(){
	int n,n1,n2,i;
	bool a;
	char op;
	cout<<	"Programa de numeros primos: "<<endl;
	cout<<	"Elige una opción: "<<endl;
	cout<<	"a.Ingresar un numero para saber si es primo."<<endl;
	cout<<	"b.Escribir todos los primos entre 2 numeros"<<endl;
	cin>>op;
	switch(op){
		case 'a':
		case 'A':
			cout<<"Ingrese un numero para determinar si es primo: \n";
			cin>>n;
			a=esprimo(n);
			if(a==true){
				cout<<n<<" es primo";
			}else{
				cout<<n<<" no es primo";
			}	
			break;
		case 'b':	
		case 'B':
			cout<<"Ingrese limite inferior: \n";
			cin>>n1;
			cout<<"Ingrese limite superior: \n";
			cin>>n2;
			for(i=n1;i<=n2;i++){
				n=esprimo(i);
				if(n==true){
					cout<<i<<" ";
				}
			}			
			break;
		default: 
			break;
	}
	return 0;
}