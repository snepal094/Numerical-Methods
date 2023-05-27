//Gauss Elimination Method
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n,i,j,k;
	float a[10][10], factor, x[10];
	cout<<"Enter the number of unknown variables: ";
	cin>>n;
	cout<<endl<<"Enter the augmented matrix: "<<endl;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=(n+1);j++){
			cout<<"a["<<i<<"]["<<j<<"]= "; cin>>a[i][j];
		}
	}
	
	for(k=1;k<=(n-1);k++){
		for(i=(k+1);i<=n;i++){
			factor=a[i][k]/a[k][k];
			for(j=1;j<=n+1;j++){
				a[i][j]=a[i][j]-factor*a[k][j];
			}
		}
	}
	
	x[n]=a[n][n+1]/a[n][n];
	
	for(i=n-1;i>=1;i--){
		x[i]=a[i][n+1];
		for(j=i+1;j<=n;j++){
			x[i]=x[i]-(a[i][j]*x[j]);
		}
		x[i]=x[i]/a[i][i];
	}
	
	cout<<"Solutions: "<<endl;
	
	for(i=1;i<=n;i++){
		cout<<x[i]<<endl;
	}
	
	getch();
	return 0;
}
