#include<iostream>
using namespace std;
int compare(string s1,string s2){
	if(s1.size()>=s2.size())
	return s2.size();
	else
	return s1.size();
}
int main(){
	int i=0,pos=0;
	string s1,s2,s3,s4;
	char c[2];
	cin >> s1 >> s2 >> s3 >> s4;
	for(;i<compare(s1,s2);i++){
		if(s1[i]==s2[i] && (s1[i]>='A' && s1[i]<='G')){
				c[0]=s1[i]; 
				break; // when break,i has not +1
		}
	}

	for(i++;i<compare(s1,s2);i++){
		if(s1[i]==s2[i] && ((s1[i]>='A'&&s1[i]<='N')||isdigit(s1[i]))){
			   c[1]=s1[i];
				break;
		}
	}
	
	for(int j=0;j<compare(s3,s4);j++){
		if(s3[j]==s4[j] && isalpha(s3[j])){
				pos = j;
				break;
		}
	
	}
	
	string week[7] = {"MON ", "TUE ", "WED ", "THU ", "FRI ", "SAT ", "SUN "};
	cout << week[c[0]-'A'];
	int m = isdigit(c[1]) ? c[1]-'0' : c[1]-'A'+10;
	
	printf("%02d:%02d", m, pos); // complete with 0


}
