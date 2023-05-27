//Lagrange's Interpolation
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i,j,n;
	float x[10], y[10], xp, product, sum=0;
	cout<<"Number of points= ";
	cin>>n;
	cout<<endl<<"Enter data: "<<endl;
	for(i=1;i<=n;i++){
		cout<<"x["<<i<<"]= "; cin>>x[i];
		cout<<"y["<<i<<"]= "; cin>>y[i];
		cout<<endl;
	}
	cout<<"Enter point where the functional value is to be determined: ";
	cin>>xp;
	
	for(i=1;i<=n;i++){
		product=1;
		for(j=1;j<=n;j++){
			if(i!=j){
				product=product*(xp-x[j])/(x[i]-x[j]);
			}
		}
		sum=sum+product*y[i];
	}
	
	cout<<"The functional value at xp= "<<xp<<" is: "<<sum<<endl;
	
	getch();
	return 0;
}
