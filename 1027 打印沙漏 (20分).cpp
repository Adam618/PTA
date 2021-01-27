#include<iostream>
using namespace std;
int main(){
	int a;
	char b;
	cin >> a >> b;
	int n=1;
	while(2*n*n-1<=a){
		n++;
	}
	n--;
	int r=a-(2*n*n-1);
    for(int i=0;i<n;i++){
    	for(int k=0;k<i;k++)
			printf(" "); 
    	for(int j=0;j<1+(n-i-1)*2;j++)
    		cout << b;
    	cout << endl;
	}
	
    	
	
} 
