#include <iostream>
using namespace std;

int main(){

int par= 0; int impar = 0; int i= 0;

while(i<=100){
	i++;
	if(i %2 == 0 ){
		par= par + i;
	}
}

i= 0;

while(i<=19){
	i++;
	if(i %2 != 0 ){
		impar= impar + i;
	}
}
	cout<<"la suma de los 50 numeros pares son : "<<par<<endl;
	cout<<"la suma de los 10 numeros impares son : "<<impar<<endl;
	return 0;
}
