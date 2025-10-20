#include<iostream>
using namespace std;

int main(){

int num = 0;
int resultado = 1;


cout<<"ingresa un numero para calcular su factorial : ";
cin>>num;

int fact = num;

while(fact > 1){
	
	resultado = fact * resultado;
	
	fact--;
}

cout<<" el factorial de "<<num<<" es : "<<resultado<<endl;


return 0;
}
