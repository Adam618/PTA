
#include<bits/stdc++.h>
using namespace std;


int main()
{
int num=0,flag=0;

string s;
cin >> num ;
for(int i=0;i<num;i++){
	cin >> s ;
    int count[3] = {0,0,0};
	flag=0;
	for(int j=0;j<s.size();j++){
		if (s[j]=='A')
		count[flag]++;
		else if(s[j]=='P' && flag==0)
			flag = 1;
		else if(s[j]=='T' && flag==1)
		    flag = 2;
		else 
			break;			
		
	}
	if(flag==2&&count[1]!=0&&(count[0]*count[1]==count[2]))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}





}








