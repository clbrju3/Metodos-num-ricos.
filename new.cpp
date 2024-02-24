#include<iostream>
#include<cmath>
using namespace std;
float xt(float x[], int n, float r){
	float s=1;
	for(int i=0;i<n;i++){
		s=s*(r-x[i]);
	}
	return s;
}
float fc(float x){
   return exp(x);
}

void escribir(float x[],int n);
void pintar(float x[], int n){
	system("cls");
	for(int i=0;i<n;i++){
		cout<<x[i]<<endl;
	}
}
int main(){
	int n=5;
	//cin>>n;
	float x[n] f[n]={150.7,179.3,203.3,226.5,294.6}, g[n], a[n];
	//escribir(x,n);
	//cout<<"Digite las imagenes los puntos que puso antes: "<<endl;
	/*for(int i=0;i<n;i++){
		cin>>f[i];
	}*/
/*for(int i=0;i<n;i++){
		f[i]=fc(x[i]);
	}*/
	for(int i=0;i<n-1;i++){
		a[i]=f[i];
		for(int k=0;k<n;k++){
		g[k]=f[k];}
	for(int j=1;j<n;j++){
		f[j]=(g[j]-g[j-1])/(x[j]-x[j-(i+1)]);
	}
	f[i]=0;
	}
	a[n-1]=f[n-1];
	pintar(a,n);
    float s=0;
    float r;
    cin>>r;
	for(int i=0;i<n;i++){
		s=s+a[i]*xt(x,i,r);
	}
	cout<<s;
}
void escribir(float x[],int n){
	float a;
	for(int i=0;i<n;i++){
		cin>>a;
		x[i]=a;
	}
}
