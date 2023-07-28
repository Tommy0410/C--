#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float a,b,c, resultado_1=0,resultado_2=0;
	cout<<"Dame el a:"; cin>>a;
	cout<<"Dame el b:"; cin>>b;
	cout<<"Dame el c:"; cin>>c;
	
	resultado_1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
	resultado_2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
	cout<<"El resultado 1 es:"<<resultado_1<<endl;
	cout<<"El resultado 2 es:"<<resultado_2<<endl;
	
	// "sqrt" es pa raiz Y "pow" es para exponentes
	
	
	
	return 0;
} 
