#include<iostream>
#include<vector>
using namespace std;
int main(){
	string a,b;
	int Da,Db,sum=0;
	cin >> a >> Da >> b >> Db;
	int pa=0,pb=0;
	for(int i=0;i<a.size();i++){
		if((a[i]-'0')==Da)
			pa=pa*10+Da;
			
	}
	
	for(int i=0;i<b.size();i++){
		if((b[i]-'0')==Db)
		 pb=pb*10+Db;
		
	}

	cout << pa+pb;
	
	
	
//	cout << (int)'0' << endl <<(int)'1';
}
