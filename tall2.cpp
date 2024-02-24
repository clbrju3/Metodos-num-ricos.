#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	char r;
	scanf("%s",&r);
	scanf("%d %d",&a,&b);
	if(r=='+'){
		c=a+b;
		printf("%d",c);
	}
	else if(r=='-'){
		c=a-b;
			printf("%d",c);
	}
	else if(r=='*'){
		c=a*b;
			printf("%d",c);
	}
	else if(r=='/'){
		c=a/b;
			printf("%d",c);
	}
	else{
		printf("No introdujo correctamente el operador");
	}
	
}
