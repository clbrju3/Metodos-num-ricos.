#include<stdio.h>
#include<cmath>
#include<math.h>
using namespace std;
double f(double c){
	return (c+2)*(c+1)*c*(c-1)*(c-2);
}
int main(){
	double a,b,c=0;
	scanf("%lf %lf",&a,&b);
	do{
	if(f(a)*f(b)<0){
		c=(a+b)/2;
		if(f(c)*f(a)<0){
			b=c;
			printf("(%lf, %lf) ",a,b);
		}
		else if(f(c)*f(b)<0){
			a=c;
			printf("(%lf, %lf) ",a,b);
		}
	}
	printf("%lf \n",c);}
	while(abs(f(c))>0.001);
}
