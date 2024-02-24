#include<cmath>
#include<iostream>
#include<iomanip>
using namespace std;
double f(double x){
	return pow(x-2,4);
}
double fd(double x){
	return 4*pow(x-2,3);
}
double fdd(double x){
	return x*sin(x)-3*cos(x);
}
int main(){
	int i=0;
	float a,y,r,e,u,w;
	cout<<"Digite su aproximación incial ";
	cin>>a;
/*	while(true){
		if(f(a)*fdd(a)>0){
			break;
		}
		else{
			cout<<"Digite una aproximacion inicial valida: ";
			cin>>a;
		}
	}*/
	while(fabs(f(a))>0.0001){
		r=a-(f(a)/fd(a));
		y=a;
		a=r;
		cout<<setprecision(9);
		cout<<"x_"<<i<<"="<<a<<"   f(x_"<<i<<")="<<f(a)<<"    "<<abs((2-a)/(2-y))<<endl;
		i++;
		
	}
}
