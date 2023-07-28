#include<iostream>
using namespace std;
int main(){
	float n1,n2,n3;
	cout<<"Dime 3 numeros:";cin>>n1>>n2>>n3;
	
	if ((n1>n2)&&(n1>n3)){
	cout<<"El numero mayor es:"<<n1;
	}
	else if((n2>n1)&&(n2>n3)){
	cout<<"El numero mayor es:"<<n2;
	}
	else{
	cout<<"El numero mayor es:"<<n3;
	}
	return 0;
}
