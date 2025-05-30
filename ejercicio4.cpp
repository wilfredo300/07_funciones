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
	
	int limi,lims,i,n;
    cout<<"Programa que escribe los numeros perfectos entre 2 numeros:"<<endl;
    cout<<"Ingresa limite inferior: ";
    cin>>limi;
    cout<<"Ingresa limite superior: ";
    cin>>lims;
	for(i=limi;i<=lims;i++){
        n=perfecto(i);
        if(n==1){
            cout<<i<<" "<<endl;
        }
	}
	return 0;
}