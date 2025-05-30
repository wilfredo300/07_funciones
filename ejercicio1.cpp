#include<iostream>
using namespace std;
//prototipos de funciones resta y producto

void resta(float val1, float val2);
float suma(float val1, float val2);
float producto (float val1, float val2);
float division (float val1, float val2);

//definición de la función resta
void resta( float val1,float val2){
	float sustrac; //variable local
	sustrac=val1-val2;
	cout<<"\nLa resta de "<<val1<<" - "<<val2<<" es: "<<sustrac;
}

float suma(float val1, float val2){
	return val1 + val2;
}
//definición de la función producto
float producto(float val1, float val2){
	float prod; //variable local
	prod = val1*val2;
	return(prod);
}

float division(float val1, float val2){
	float div;
	div = val1/val2;
	return div;
}

int main(){//funcion principal main
	float num1,num2,resultado;
	float sum1,sum2;
	float div1,div2;
	cout<<"Ingrese el primer numero: "; cin>>num1;
	cout<<"Ingrese el segundo numero: "; cin>>num2;
	
	//llamadas a la función resta
	resta(num1,num2);
	resta(num2,num1);
	
	//llamadas a la función suma
	resultado=suma(num1,num2);
	cout<<"\nLa suma de "<<num1<<" con "<<num2<<" es: "<<resultado;
	
	//llamada a la función producto
	resultado=producto(num1,num2);
	cout<<"\nLa multiplicacion de "<<num1<<" por "<<num2<<" es: "<<resultado;
	
	//llamada a la función división
	
	div1=division (num1,num2);
	div2=division (num2,num1);
	cout<<"\nLa division entre "<<num1<<" y "<<num2<<" es: "<<resultado;
	cout<<"\nLa division entre "<<num2<<" y "<<num1<<" es: "<<resultado;
	
	
	return 0;
	
}


