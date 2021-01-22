#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b;
	cin >> a >> b;
	float r=(b-a)/100;
	int res;
	if(r-floor(r)>=0.5)
		res=floor(r)+1;
	else 
		res=floor(r);	
	int h,m,s;
	h=res/3600;
	m=(res%3600)/60;
	s=(res%3600)%60;
	printf("%02d:%02d:%02d",h,m,s);
}
