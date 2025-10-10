#include<iostream>
using namespace std;

int main(){
    
    float dolares=0;
    float euros=0;
    float Vtransformado=0;
    
    
    cout<<"dame la tasa del dolar : ";
    cin>>euros;
    cout<<"dame la cantidad de euros a transformar : ";
    cin>>dolares;
    
    Vtransformado= dolares * euros;
    
    cout<<"el total es : "<<Vtransformado<<endl;
    
    return 0;
    
}
