//Least Square Method
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i, n;
	float x[10], y[10], sumx=0, sumy=0, sumx2=0, sumxy=0, a, b;
	cout<<"Enter the number of points: ";
	cin>>n;
	cout<<endl<<"Enter data: "<<endl;
	for(i=1;i<=n;i++){
		cout<<"x["<<i<<"]= "; cin>>x[i];
		cout<<"y["<<i<<"]= "; cin>>y[i];
	}

	for(i=1;i<=n;i++){
		sumx= sumx+x[i];
		sumy= sumy+y[i];
		sumx2= sumx2+x[i]*x[i];
		sumxy= sumxy+x[i]*y[i];
	}
	
	b= (n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
	a= (sumy-b*sumx)/n;
	cout<<"The equation obtained that fits all the entered data points is: ";
	cout<<"y= "<<a<<"+"<<b<<"x"<<endl;
	
	getch();
	return 0;
}
