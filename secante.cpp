#include<math.h>
#include<iostream>
#include<iomanip>
using namespace std;
double f(double x){
	return pow(x,3)-5*pow(x,2)+3*x-7;
}
int main(){
	int i=0;
	float a,y,r,e,b,w;
	cout<<"Digite sus dos aproximaciones inciales ";
	cin>>a;
	cin>>b;
	while(fabs(f(a))>0.0001){
		r=a-((b-a)/(f(b)-f(a)))*f(a);
		a=b;
		b=r;
		cout<<setprecision(9);
		cout<<"x_"<<i<<"= "<<r<<"   f(x_"<<i<<")= "<<f(r)<<endl;
		i++;
		
	}
}
