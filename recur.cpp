#include<iostream>
using namespace std;
int f(int x, int y){
	if(y==0){
		return x;
	}
	else if(y==1){
		return 2+x;
	}
	else{
	return f(x,y-1)+f(x,y-2);}
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<f(x,y);
	
		return 0;
}
