#include<iostream>
#include<cmath>
using namespace std;
double f(double c){
	return (3/(2*c)+c/2);
}
int main(){
	double a,b,c;
	a=2;
	cout<<a<<"   "<<f(a)<<endl;
	while(abs(f(a)-a)>0.00000001){
		b=f(a);
		a=b;
		cout<<a<<"   "<<f(a)-a<<endl;
	}
}
