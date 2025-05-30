#include<iostream>
using namespace std;
int perfecto(int a){
	int i,s;
	s=0;
	for (i=1;i<a;i++){
		if(a%i==0){
			s=s+i;
		}
	}
	if (s==a){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	
	int n,a;
	while(a>=0){
	cout<<"Ingresa un numero entero para determinar si es perfecto: ";
	cin>>a;
	n=perfecto(a);
	if(n==1){
		cout<<a<<" es perfecto."<<endl;
	}else{
		cout<<a<<" no es perfecto"<<endl;
	}
	}
	return 0;
}