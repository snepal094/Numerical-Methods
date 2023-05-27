//Numerical Integration
//Simpson's 1/3 Method
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
		sum= sum+2*f(k);
	}
	
	integration= (h/2)*(sum+f(a)+f(b));
	cout<<"Integration of the given function from "<<a<<" to "<<b<<" is: "<<integration<<endl;
	
	getch();
	return 0;
}
