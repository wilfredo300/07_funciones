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
	int n;
	bool a;
	cin>>n;
	a=esprimo(n);
	if(a==true){
		cout<<"El numero es primo";
	}else{
		cout<<"El numero no es primo";
	}
	return 0;
	
}