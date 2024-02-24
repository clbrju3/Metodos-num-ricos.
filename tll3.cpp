#include<stdio.h>
using namespace std;
int main(){
	int a,b;
	scanf("%d",&a);
	int notas[a];
	for(int i=0;i<a;i++){
		scanf("%d",&b);
		notas[i]=b;
		
	}
	printf("%d",notas[1]);
	
}
