#include <iostream>
#include<cmath>
#include <conio.h>

using namespace std;

void raices(float &x1, float c );
int main()

{ int m, n;

 float c, x1;

cout<<"Introduzca a, b, c"<<endl;

cin>>c;

raices(x1,c);

printf("x1=%f, \n", x1);

return 0;

}

void raices(float &x1, float c ) // cambio aqui

{ if(c<2){
	x1=1;
}
else{
	x1=raices(x1,c-1)+raices(x1,c-2);
}
}


