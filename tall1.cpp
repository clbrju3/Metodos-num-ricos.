#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a;
	scanf("%d",&a);
	int dias=a/(60*24);
	int horas=(a%(60*24))/60;
	int minutos=(a-dias*60*24-horas*60);
	printf("%d son %d dias, %d horas y %d minutos",a,dias,horas,minutos);
}
