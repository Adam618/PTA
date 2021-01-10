#include<iostream>
#include<vector>
using namespace std;
int main(){
	
	vector<int> v[5];
	int n,num,A1=0,A2=0,A5=0;
	float A4=0.0;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> num;
		v[num%5].push_back(num);
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<v[i].size();j++){
			if(i==0 && v[i][j]%2==0) A1+=v[i][j];
			if(i==1 && j%2==0) A2+=v[i][j];
			if(i==1 && j%2==1) A2-=v[i][j];	
			if(i==3) A4+=v[i][j];
			if(i==4 && A5<v[i][j]) A5=v[i][j];
		}
	}
    for(int i=0;i<5;i++){
    	if(i!=0) printf(" ");
    	if (i == 0 && A1 == 0 || i != 0 && v[i].size() == 0) {  // 被5整除后可能全是奇数，则偶数不存在，但数组不为空 
            printf("N"); continue;
        }
    	if(i==0) printf("%d",A1);
   		if(i==1) printf("%d",A2);
		if(i==2) printf("%d",v[2].size());
		if(i==3) printf("%.1f",A4/v[3].size()); 
		if(i==4) printf("%d",A5);      	
	}		
	
}  
