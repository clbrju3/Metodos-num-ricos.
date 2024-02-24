#include<iostream>
#include <string>
using namespace std;
float sumatoria(int k, int n, float x[100],float m[100][100]){
	float z=0;
	if(k==n-1){
		return 0;
	}
	else{
	for(int j=k+1;j<n;j++){
		z+=x[j]*m[k][j];
	}}
	return z;
}
int main(){
	int n;
	cout<<"Digite el orden de la matriz que necesita: "<<endl;
	cin>>n;
		float m[100][100],a,x[100],s[100];
	cout<<"Digite la matriz que necesita: "<<endl;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a;
			m[i][j]=a;
		}
	}
	for (int i=0;i<n;i++){
			cout<<endl;
		for(int j=0;j<n;j++){
			cout<<m[i][j]<<" ";}}
	cout<<endl<<"Digite la solucion: ";
	for(int i=0;i<n;i++){
	cin>>s[i];}
	for(int q=1;q<n;q++){
	for(int i=q;i<n;i++){
		float u=m[i][q-1];
		s[i]=s[i]-s[q-1]*(u/m[q-1][q-1]);
		if(u!=0){
			for(int j=0;j<n;j++){
				float r=m[q-1][j]*(u/m[q-1][q-1]);
				m[i][j]=m[i][j]-r;		
			}}
			}
		}
 cout<<"Matriz escalonada: "<<endl;
		for (int i=0;i<n;i++){
			cout<<endl;
		for(int j=0;j<n;j++){
			cout<<m[i][j]<<" ";
		}cout<<" | "<<s[i];
	}
	for(int k=n-1;k>=0;k--){
		x[k]=(s[k]-sumatoria(k,n,x,m))/m[k][k];
	}
	cout<<endl<<"El vector solucion es: (";
	for(int i=0;i<n-1;i++){
		cout<<x[i]<<", ";
	}
	cout<<x[n-1]<<")";
}
