#include<iostream>
#include<algorithm>
using namespace std;
bool cmpIn(char a,char b){
	return a<b; 
}
bool cmpDe(char a,char b){
	return a>b;
} 
int main(){
	string a,b,s;
	int r;
	cin >> s;
	
	do{
		s.insert(0,4-s.length(),'0');
		a=s;
		b=s;
		sort(a.begin(),a.end(),cmpDe);
		sort(b.begin(),b.end(),cmpIn);
		r=stoi(a)-stoi(b);
		s=std::to_string(r);
		s.insert(0,4-s.length(),'0');
		cout<<a<<" - "<<b<<" = "<<s<<endl;
	}while(s!="6174" && s!="0000");
}

