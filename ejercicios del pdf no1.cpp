#include<iostream>
using namespace std;

int main(){
	
	int peral=0;
	
	cout<<"ingrese el periodo anual en curso : ";
	cin>>peral;
	
	if(peral % 4==0 && peral % 100 !=0 || peral % 400==0){
		cout<<peral <<" es bisiesto"<<endl;
	}else
	cout<< peral <<" no es bisiesto"<<endl;
	
return 0;
}
