#include<iostream>
using namespace std;
int main(){
	int n;
	char in,out;
	char m[80][80];
	bool first=true;
	while(cin >> n >> in >> out){
		for(int k=0;k<=n/2;k++){
			if(first){
				first = false;	
			}
			else{
				cout << endl;	
			} // 整个叠框之间需要回车间隔开
		}	
		
		for(int i=0;i<=n/2;i++){ // 填充整个叠框 
			int j=n-i-1;
			int l=n-2*i;
			char c;
			if((n/2-i)%2==0){
				c=out;	
			}else{
				c=in;
			} //选择填充字符 
			
			for(int k=0;k<l;k++){
				m[i][i+k]=c;
				m[i+k][i]=c;
				m[j][j-k]=c;
				m[j-k][j]=c;
			} // 填充当前一层叠框 
		} // 一整个叠框填充完毕 
	
	    m[0][0]=' ';
	    m[n-1][n-1]=' ';
	    m[0][n-1]=' ';
	    m[n-1][0]=' ';
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout << m[i][j];
			}
			cout << endl;
		}	
									
		
	}
} 
