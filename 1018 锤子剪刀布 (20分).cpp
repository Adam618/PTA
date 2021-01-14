#include<iostream>
using namespace std;
int sort(int a[]){
	int max=0;
	for(int i=1;i<3;i++){
		if(a[i]>a[max])
			max=i;	
	}
	return max;
}
int main(){
	int n,jiaWin=0,yiWin=0;
	char s,t;
	int jia[3]={0},yi[3]={0};
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s >> t;
		if(s=='C' && t=='J'){
			jiaWin++;
		    jia[1]++;
		}else if(s=='C' && t=='B'){
			yiWin++;
			yi[0]++;
		}else if(s=='J' && t=='C'){
			yiWin++;
			yi[1]++;
		}else if(s=='J' && t=='B'){
			jiaWin++;
			jia[2]++;
		}else if(s=='B' && t=='C'){
			jiaWin++;
			jia[0]++;
		}else if(s=='B' && t=='J'){
			yiWin++;
			yi[2]++;
		}
	}
	cout << jiaWin << " " << n-jiaWin-yiWin << " " << yiWin << endl;
	cout << yiWin << " " << n-jiaWin-yiWin << " " << jiaWin << endl;
	char c[3]={'B','C','J'};
	cout << c[sort(jia)] << " " << c[sort(yi)]; 
	
}
