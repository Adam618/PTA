#include<iostream>
using namespace std;
int main(){
	string s;
	int a,temp,t;
	cin >> s >> a;
	t=(s[0]-'0')/a;
	if(s.length()==1 || (s.length()>1 && t!=0) ) // The first number is dealt with separately,
	cout << t;                                   // because if the quotient is 0 it might not output.
	temp = (s[0]-'0')%a;
	for(int i=1;i<s.length();i++){
		t = (temp*10+s[i]-'0')/a;
		cout << t;
		temp = (temp*10+s[i]-'0')%a;
		
	}
	cout << " " << temp;
	
}
