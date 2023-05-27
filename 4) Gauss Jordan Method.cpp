//Gauss Jordan Method
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int n, i, j, k ;
	float a[10][10], pivot, fact;
	cout<<"Enter the number of unknown variables: ";
	cin>>n;
	
	cout<<"Enter the augmented matrix:"<<endl;
	for(i=1;i<=n;i++){
		for(j=1;j<=(n+1);j++){
			cout<<"a["<<i<<"]["<<j<<"]= ";
			cin>>a[i][j];
		}
	}
	
	for(k=1;k<=n;k++){
		pivot=a[k][k]; //diagonal elements
		for (j=1;j<=(n+1);j++){
			a[k][j]=a[k][j]/pivot;
			
		}
		
		for(i=1;i<=n;i++){
			factor=a[i][k];
			if(i!=k){
				for(j=1;j<=(n+1);j++){
					a[i][j]=a[i][j]-a[k][j]*factor;
				}
			}
		}
	}
	
	cout<<"The unknown variables are determined in order as: "<<endl;
	for(i=1;i<=n;i++){
		cout<<a[i][n+1]<<"\t";
	}
	
	getch();
	return 0;
}
