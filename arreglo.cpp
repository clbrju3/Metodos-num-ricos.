#include <iostream>
using namespace std;
int ordenar(float lista[6]){
	int a;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			if(lista[])
		}
	}
return a;
}

void xd(int i){
	if(i==0){
		cout<<"Digite las edades: ";
	}
	else if(i==1){
		cout<<"Digite el sueldo: ";}
	else {
		cout<<"Digite el tiempo en la empresa: ";
	}
	cout<<endl;
	}

int main(){
	int re[6];
	int n,y=0;
	float s=0;
	cout<<"Digite el numero de personas entre 4 y 6: ";
	cin>>n;
	while(n<4 || n>6){
		cout<<"Digite el numero entre 4 y 6: ";
		cin>>n;
	}
	float matriz[3][6];
	for (int i=0;i<3;i++){
		xd(i);
		for (int j=0; j<n; j++){
			cin>>matriz[i][j];
		}
	}
	for (int i=0;i<n;i++){
		s=s+matriz[1][i];
	}
	s=s/n;
	cout<<"Promedio de sueldos: "<<s<<endl;
    for(int i=0;i<n;i++){
    	if(matriz[1][i]>s){
    		re[i]=matriz[0][i];
		}
	}
	
	
	return 0;
}

}
