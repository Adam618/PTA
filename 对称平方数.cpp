#include<iostream>
using namespace std;
bool isSymmetry(int a){
	int b=a;
	int res=0;
	while(a!=0){
		res=res*10+a%10;
		a=a/10;		
	}
	if(res==b)
		return true;
	else
		return false;
}
int main(){
	for(int i=0;i<=256;i++){
		if(isSymmetry(i*i))
			cout << i << endl;
	}
} 
