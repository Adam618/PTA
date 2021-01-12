#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
struct student{
	int num,de,cai;
};
int cmp(student a,student b){
	if((a.de+a.cai)!=(b.de+b.cai))
	return (a.de+a.cai)>(b.de+b.cai);
	else if(a.de!=b.de)
	return a.de>b.de;
	else
	return a.num<b.num;
}
int main(){
	vector<student> v[4];
	int n,min,max,total;
	scanf("%d %d %d",&n,&min,&max);
	total = n;
	student temp;
	for(int i=0;i<n;i++){  // 1.classify
		cin >> temp.num >> temp.de >> temp.cai;
		if(temp.de<min || temp.cai<min)
		 total--;
	   else	if(temp.de>=max && temp.cai>=max)
		v[0].push_back(temp);
	   else if(temp.de>=max && temp.cai<max)
	    v[1].push_back(temp);
	   else if((temp.de<max && temp.cai<max) && temp.de>=temp.cai)
	    v[2].push_back(temp);
	   else 
	    v[3].push_back(temp);	 
	}
	cout << total <<endl;
	for(int i=0;i<4;i++){ // 2.sort & print
		sort(v[i].begin(),v[i].end(),cmp);
	    for(int j=0;j<v[i].size();j++)
	    printf("%d %d %d\n", v[i][j].num, v[i][j].de, v[i][j].cai);	
	}
	
}
