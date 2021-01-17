#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct mooncake{
	float price;
	float amount;
	float unit;
}; 
bool cmp(mooncake a,mooncake b){
	return a.unit > b.unit;
}
int main(){
	int n,need;
	float total=0.0;
	cin >> n >> need;
	vector<mooncake> v(n);
	for(int i=0;i<n;i++) cin >> v[i].amount;
	for(int i=0;i<n;i++) cin >> v[i].price;
	for(int i=0;i<n;i++) v[i].unit = v[i].price/v[i].amount;
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<v.size();i++){
		if(need>v[i].amount) total=total+v[i].price;
		else {
			total=total+need*v[i].unit;	
			break;
		}
		need=need-v[i].amount;
	}
	printf("%.2f",total);
		
}
