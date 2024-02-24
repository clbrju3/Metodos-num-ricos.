#include <iostream>
using namespace std;
int main(){
	float s=0,a;
	float matriz [3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a;
			matriz[i][j]=a;
		}
	}
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			s=s+matriz[i][j];
		}
		s=s-matriz[i][i];
		if(matriz[i][i]<s){
			cout<<"Su matriz no cumple el requisito en la fila "<<i;
			break;
		}
	}
	
	return 0;
}
