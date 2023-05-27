//Newton Raphson Method
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

#define f(x) ((3*x)-cos(x)-1)
#define g(x) (3+sin(x))
#define error 0.0001

int main(){
	float x0, x1, x2;
	cout<<"Enter initial guess x0: ";
	cin>>x0;
	
	do{
		x2= x0;
		x1= x0-(f(x0)/g(x0));
		x0=x1;
	}while(fabs(x2-x0)>error);
	
	cout<<"The root of the given equation is: "<<x2;
	
	getch();
	return 0;
}
