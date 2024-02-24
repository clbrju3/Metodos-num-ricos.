#include<math.h>
#include<iostream>
#include<iomanip>
using namespace std;
double f(double a){
	double c;
	c=pow(a,2)-a-3;	
	return c;
}
int main(){
	int i=0;
	double r,a,b,u;
	a=2;
	b=3;
	do{
		r=b-(f(b)*(b-a))/(f(b)-f(a));
		i++;
		if(f(r)*f(a)<0){
			b=r;
		}
		else if(f(r)*f(b)<0){
			a=r;
		}
		else{
			continue;
		}
		cout<< setprecision(9);
		cout<<"i="<<i<<"   ["<<a<<","<<b<<"]   r="<<r<<" f(r)="<<f(r)<<endl;
	}
	while(fabs(f(r))>0.000000001 );
	cout<< setprecision(9);
	cout<<"Su respuesta aproximada es: "<<r;
}
