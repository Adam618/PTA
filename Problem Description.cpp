#include<iostream>
using namespace std;
bool compare(string s){
	string temp="EASY";
	int i=0,j=0;
	while(i<1000&&j<4){
		if(s[i]==temp[j]){
			i++;
			j++;
		}else{
			i++;
		}
	}
	
	if(i>=1000 && j!=4)
		return false;
	else
		return true;	
}
int main(){
	cout << "ÇëÊäÈë×Ö·û´®µÄ¸öÊý" << endl;
	int n;
	cin >> n;
	cout << "ÇëÊäÈë×Ö·û´®" << endl; 
	string s[n];
	for(int i=0;i<n;i++)
		cin >> s[i];
		
	for(int i=0;i<n;i++){
		if(compare(s[i]))
		cout << "easy" << endl;
		else
		cout << "difficult" << endl;
	}	
	
} 
