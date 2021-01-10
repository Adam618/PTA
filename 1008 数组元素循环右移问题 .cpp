#include<iostream>
using namespace std;
void reverse(int a[],int left,int right){
	int temp;
 for(int i=0;i<(right-left+1)/2;i++){
 	temp=a[left+i];
 	a[left+i]=a[right-i];
 	a[right-i]=temp;
 }
}
int main(){
int n,m;
cin >> n >> m;
int a[n];
m %= n;
for(int i=0;i<n;i++){
	cin >> a[i];
}

reverse(a,0,n-1); // reverse arrary
reverse(a,0,m-1);
reverse(a,m,n-1); 
for(int i=0;i<n-1;i++)	
 cout << a[i] << " ";
cout << a[n-1];


	
}
 
