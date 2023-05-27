//Bisection Method
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

#define f(x) ((x*x*x)-(4*x)+1) 
#define error 0.001

int main(){
	float x0, x1, x2, p, d;
	do{
		cout<<"Enter the initial guesses x1 and x2: "<<endl;
		cout<<"x1: "; cin>>x1;
		cout<<"x2: "; cin>>x2;
		p=f(x1)*f(x2);
	}while(p>0);
	
	do{
		x0=(x1+x2)/2;
		if ((f(x0)*f(x1))>0)
		x1=x0;
		else
		x2=x0;
		d=fabs(x2-x1);
	}while(d>error);
	
	cout<<"The root of f(x) that lies in the given range is: "<<x0;
	
	getch();
	return 0;
}

