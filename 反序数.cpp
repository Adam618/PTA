#include<iostream>
using namespace std;
int reverse(int a){
    int res=0;
	int j=0;
	while(a!=0){
		res=res*10+a%10;
		a=a/10;
	}
	return res;
	
}
int main(){
	for(int i=1000;i<=9999;i++){
		if(i*9==reverse(i))
		cout << i << endl;
	}
} 
