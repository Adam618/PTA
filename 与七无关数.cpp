#include<iostream>
using namespace std;
bool isRelate7(int a){
	if(a%7==0)
		return true;
	while(a!=0){
		if(a%10==7)
			return true;
		a=a/10;	
	}
	return false;
}
int main(){
	int n,sum=0;
	cin >> n;
	for(int i=0;i<=n;i++){
		if(!isRelate7(i))
			sum=sum+i*i;
	}
	cout << sum;
}
