#include<iostream>
using namespace std;

int main(){
	char opc;
	do{
	
int num = 0;
int sum = 0;
int cont= 1;

cout<<"ingrese un numero que sea entero y positivo : ";
cin>>num;

if(num>=0){
	while(cont<num){
		if(num % cont == 0){
			sum = sum + cont;
		}
		cont++;
	}
	if(sum == num){
		cout<<num<<" es un numero perfecto "<<endl;
	}else
	cout<<num<<" no es un numero perfecto "<<endl;
}else
cout<<"el numero tiene que ser obligatoriamente entero y positivo"<<endl;

cout<<"quieres buscar otro numero perfecto? [Y]: ";
cin>>opc;
}while(opc == 'y'|| opc == 'Y');
return 0;
}
