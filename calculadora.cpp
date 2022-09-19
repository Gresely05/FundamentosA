#include<iostream>
using namespace std;
int main(){
	float n1,n2,s,r,m,d;
	cout<<"Ingrese el primer numero";cin>>n1;
	cout<<"Ingrese el segundo numero";cin>>n2;
	s = n1+n2;
	r = n1-n2;
	m = n1*n2;
	d =n1/n2;
	cout<<"La suma de "<<n1<<" y de "<<n2<<" es igual a "<<s<<endl;
	cout<<"La resta de "<<n1<<" - "<<n2<<" = "<<r<<endl;
	cout<<"La multiplicacion de "<<n1<<" * "<<n2<<" = "<<m<<endl;
	cout<<"La division de "<<n1<<" / "<<n2<<" = "<<d<<endl;
	return 0;
}
