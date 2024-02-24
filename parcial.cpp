#include<iostream>
using namespace std;
float L(float a, float r[], float p){
	float s;
	s=((a-r[0])/(p-r[0]))*((a-r[1])/(p-r[1]));
	return s;
}
int main(){
	float k;
	float q=0;
	float x[7]={0,2.5,5,7.5,10,12.5,15}, y[7]={10,4.97,2.47,1.22,0.61,0.3,0.14},ny[3], nx[3],a[3];
	cout<<"Seleccione los nodos que quiere usar (Del 1 al 7): "<<endl;
	for(int i=0;i<3;i++){
		int b;
		cout<<i+1<<" nodo: ";
		cin>>b;
		nx[i]=x[b-1];
		ny[i]=y[b-1];
	}
	cout<<"Sus nodos son: ("<<nx[0]<<", "<<ny[0]<<") , ("<<nx[1]<<", "<<ny[1]<<") ,("<<nx[2]<<", "<<ny[2]<<") "<<endl;
	cout<<"Digite el x donde quiere aproximar: ";
	cin>>k;
	while(k==nx[0] || k==nx[1] || k==nx[2]){
		cout<<"Digite un x que no corresponda con un nodo: ";
		cin>>k;
	}
   float r2[2]={nx[0],nx[1]};
   float r1[2]={nx[0],nx[2]};
   float r0[2]={nx[1],nx[2]};
   float u=nx[0],f=nx[1],t=nx[2];
   a[0]=L(k,r0,nx[0]);
	a[1]=L(k,r1,nx[1]);
	a[2]=L(k,r2,nx[2]);	
	for(int i=0;i<3;i++){
		q=q+ny[i]*a[i];
	}
	cout<<"Su aproximacion por medio de la interpolacion de Lagrange en ese punto es: "<<q;
	return 0;
}
