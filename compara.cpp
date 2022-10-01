#include<iostream>
using namespace std;
int main(){
  float x,y;
  cout<<"Ingresar el valor de X: "; cin>>x;
  cout<<"Ingresar el valor de Y: "; cin>>y;
  if(x==y){
    cout<<"Los valores de X y Y son similares"<<endl;

  }else if (x<y){
    cout<<"El valor de X es menor que el de Y"<<endl;

  }else{
    cout<<"El valor de X es mayor que el de Y"<<endl;

  }
  return 0;
}
