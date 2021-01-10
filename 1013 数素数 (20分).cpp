#include<iostream> 
#include<vector>
using namespace std;

bool isPrime(int n){
	for(int i=2;i*i<=n;i++)
	if(n%i==0) return false;
	return true;
}
int main(){
	vector<int> v;
	int flag=0,count=0,m,n,i=2;
	cin>>m>>n;
	while(count<n){
		if(isPrime(i)){
		count++; // count primer number 
		if(count>=m)
		v.push_back(i);
		}		
    	i++;
	}
	
	for (auto it = v.begin(); it != v.end(); it++) {
	flag++;
	if(flag%10!=1)
	printf(" ");
	cout << *it;
	if(flag%10==0)
	printf("\n");
    
     }	 
	
	 

} 
 

