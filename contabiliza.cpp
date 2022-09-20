#include<iostream>
using namespace std;
int main(){
	int i=0,l;
	float x,s=0;
	cout<<"Ingrese el limite"<<endl;
	cin>>l;
	do{
		cout<<"Ingrese el numero x="<<endl;
		cin>>x;
		i=i+1;
		s=s+x;
	}while(i<l);
	cout<<" Se ingresaron "<<l<<" numeros "<<" que sumaron"<<s<<endl;
	return 0;
}
