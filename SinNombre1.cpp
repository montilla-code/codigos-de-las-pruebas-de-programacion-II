#include<iostream>

/*haz un programa que reciba un numero de 3 digitos o mas grande y que muestre en pantalla los primeros 10 de numeros que son divisibles */

using namespace std;

int main(){
	
int num=0;
int numDV=0;
int cont=1;
char otravez;

do{
num=0;
numDV=0;
cont=1;

cout<<"ingrese un numero de 3 digitos o mas : ";
cin>>num;
if(num>=100){
	cout<<"la cantidad de numeros divisibles es :"<<endl;
	while(numDV<11 && cont<=num){
		if(num %cont== 0){
			cout<< cont <<""<<endl;
			numDV++;
		}
		cont++;
	}
	cout<<"los numeros que son divisibles entre" <<num<< "son : " <<endl;
}else
cout<<"el numero que ingresaste no es valido"<<endl;
cout<<"si quieres calcular otro numero ingresa la letra 'y'"<<endl;
cin>>otravez;
}while(otravez=='y' || otravez=='Y');

return 0;
}
