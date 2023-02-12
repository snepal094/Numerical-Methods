//Secant Method
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

#define f(x) ((3*x)-cos(x)-1)
#define error 0.0001

int main(){
	float x1, x2, x3, d;
	cout<<"Enter initial guesses x1 and x2: "<<endl;
	cout<<"x1: "; cin>>x1;
	cout<<"x2: "; cin>>x2;
	
	do{
	x3= ((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));
	x1=x2;
	x2=x3;
	d= fabs(x2-x1);	
	}while(d>error);
	
	cout<<"The root that lies within the given range is: "<<x3;
	
	getch();
	return 0;
}
