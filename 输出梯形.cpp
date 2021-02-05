#include<iostream>
using namespace std;
int main(){
	int h;
	cin >> h;
	for(int i=0;i<h;i++){
		for(int j=0;j<2*h-2*i-2;j++)
			cout << " ";
		for(int k=0;k<h+2*i;k++)
			cout << "*";
		cout << endl;		
		
	}
}
