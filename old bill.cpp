#include<iostream>
using namespace std;
int main(){
	int n,unfade1,unfade2,unfade3;
	while(cin >> n){
		int total,flag=0;
		cin >> unfade1 >> unfade2 >> unfade3;
		for(int i=9;i>=1;i--){
			for(int j=9;j>=0;j--){
				total=i*10000+unfade1*1000+unfade2*100+unfade3*10+j;
				if(total%n==0){
					flag=1;
					cout << i <<" " << j << " "<< total/n << endl;
					break;	
				}
						
			}
			if(flag==1)	break;
		}
		if(flag==0) cout << "0" << endl;
			
	}
}
