#include<iostream>
using namespace std;

int main(){

char nombre[15]="Jose";
int nota= 0;
int notaT=0;
int i=1;
int puntaje= 0;


while(i<=10){
	i++;
	
	nota=0;
	
	cout<<"ingrese su nota : ";
	cin>>nota;
	
	notaT= notaT+nota;
}

puntaje=(notaT/10);


if(puntaje<=10){
	cout<<"aprobaste jose : "<<puntaje<<endl;
}else
cout<<"reprobaste jose : "<<puntaje<<endl;


    return 0;
    
}
