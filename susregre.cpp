#include<iostream>
using namespace std;
float sumatoria(int k, float x[3],float m[3][3]){
	float z=0;
	if(k==2){
		return 0;
	}
	else{
	for(int j=k+1;j<3;j++){
		z+=x[j]*m[k][j];
	}}
	return z;
}
int main(){
	float m[3][3],a,x[3]={0,0,0},s[3]={1,2,3};
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a;
			m[i][j]=a;
		}
	}
	for(int k=2;k>=0;k--){
		x[k]=(s[k]-sumatoria(k,x,m))/m[k][k];
	}
	cout<<"El vector solución es: X=("<<x[0]<<", "<<x[1]<<", "<<x[2]<<")";
	
}
