//6
//Power Method to find the Eigen Vector and Eigen Value
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

#define error 0.001

int main(){
	int i, j, n;
	float e, a[10][10], x[10], y[10], emax, eigenvalue;
	cout<<"Enter the order of the square matrix: "; cin>>n;
	cout<<"Enter the square matrix: "<<endl;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<"a["<<i<<"]["<<j<<"]= "; cin>>a[i][j];
		}
	}
	
	cout<<"Enter the initially assumed Eigen Vector of order 1 x "<<n<<": "<<endl;
	for(i=1;i<=n;i++){
		cout<<"x["<<i<<"]= "; 
		cin>>x[i];
	}
	
	eigenvalue=0;
	
	do{
		//Multiplication of the square matrix with eigen vector:
		for(i=1;i<=n;i++){
			y[i]=0;
			for(j=1;j<=n;j++){
				y[i]=y[i]+a[i][j]*x[j];
			}
		}
		
		emax=y[1]; //assuming the dominant value
		
		//Finding the real dominant value: 
		for(i=2;i<=n;i++){
			if (fabs(y[i])>fabs(emax))
			emax=y[i];
		}
		
		e=fabs(emax-eigenvalue);
		
		//Calculating real Eigen Vector (iteration)
		for(i=1;i<=n;i++){
			x[i]=1/emax*y[i];
		}
		
		eigenvalue=emax;
	}while(e>error);
	
	cout<<"Calculated Eigen Value= "<<eigenvalue<<endl;
	cout<<"Calculated Eigen Vector: "<<endl;
	for(i=1;i<=n;i++){
		cout<<x[i]<<endl;
	}
	
	getch();
	return 0;
}
