//Numerical Integration
//Composite Simpson's 3/8 Method
#include<iostream>
#include<conio.h>
using namespace std;

#define f(x) 1/(1+x*x)

int main(){
	int n, i;
	float sum=0, k, h, integration, a, b;
	cout<<"Enter lower limit: "; cin>>a;
	cout<<"Enter upper limit: "; cin>>b;
	cout<<"Number of intervals: "; cin>>n;
	h=(b-a)/n;
	
	for(i=1; i<=(n-1);i++){
		k=a+i*h;
		if(i%3==0)
		sum= sum+2*f(k);
		else
		sum= sum+3*f(k);
	}
	
	integration= (3*h/8)*(sum+f(a)+f(b));
	cout<<"Integration of the given function from "<<a<<" to "<<b<<" is: "<<integration<<endl;
	
	getch();
	return 0;
}
