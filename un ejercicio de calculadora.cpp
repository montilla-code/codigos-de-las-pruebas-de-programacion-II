#include<iostream>

using namespace std;

int main(){
	
	char otravez;
	
	do{
	double num1 = 0;
	double num2 = 0;
	double suma = 0;
	double resta = 0;
	double multiplicacion = 0;
	double division = 0;
	char opc;
	
	cout<<"/////////////////////////////////////"<<endl;
    cout<<"//////////que quieres hacer?//////////"<<endl;
	cout<<"//////////. sumar = s      //////////"<<endl;
	cout<<"//////////. restar = r     //////////"<<endl;
	cout<<"////////  . multiplicar = m  ////////"<<endl;
	cout<<"//////////. dividir = d    //////////"<<endl;
	cout<<"/////////////////////////////////////"<<endl;
	cout<<"////////: ";
	cin>>opc;
	if(opc=='s'||opc=='r'||opc=='m'||opc=='d'){
	switch(opc){
	case's':
		cout<<"ingrese el 1er numero: ";
		cin>>num1;
		cout<<"ingrese el 2do numero: ";
		cin>>num2;
		
		suma= num1 + num2;
		
		cout<<"el resultado de la suma es: "<<suma<<endl;
		
		break;//aqui finaliza la suma
		
		case'r':
		cout<<"ingrese el 1er numero: ";
		cin>>num1;
		cout<<"ingrese el 2do numero: ";
		cin>>num2;
		
		resta= num1 - num2;
		
		cout<<"el resultado de la resta es: "<<resta<<endl;
		
		break;//aqui finaliza la resta
		
		case'm':
		cout<<"ingrese el 1er numero: ";
		cin>>num1;
		cout<<"ingrese el 2do numero: ";
		cin>>num2;
		
		multiplicacion= num1 * num2;
		
		cout<<"el resultado de la multiplicacion es: "<<multiplicacion<<endl;
		
		break;//aqui finaliza la multiplicacion
		
		case'd':
		cout<<"ingrese el 1er numero: ";
		cin>>num1;
		cout<<"ingrese el 2do numero: ";
		cin>>num2;
		
		if(num2 > 0){
			division= num1 / num2;
				cout<<"el resultado de la division es: "<<division<<endl;
		}else
		cout<<"NO INGRESES 0 ANIMAL"<<endl;
	
		break;//aqui finaliza la division
	}
}else
cout<<"esa opcion no es valida"<<endl;
	cout<<"si quieres calcular otra vez ingresa 'Y' :";
	cin>>otravez;
	}while(otravez== 'y'|| otravez=='Y' );
	
	
	return 0;
}
