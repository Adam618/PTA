
#include <iostream>
using namespace std;

int main(){
	
	
	string stuName,maxStuName,minStuName,maxStuNumber,minStuNumber,stuNumber;
	int num,stuGrade=0,minStuGrade=101,maxStuGrade=-1;
	cin >> num;
	for(int i=0;i<num;i++){
		
		cin >> stuName >> stuNumber >> stuGrade;
		
		if(maxStuGrade<stuGrade){
			maxStuGrade = stuGrade;
			maxStuName = stuName;
			maxStuNumber = stuNumber;
		}
		
			if(minStuGrade>stuGrade){
			minStuGrade = stuGrade;
			minStuName = stuName;
			minStuNumber = stuNumber;
		}
			 
	}
	
	cout << maxStuName <<" "<< maxStuNumber<<endl;
	cout << minStuName <<" "<< minStuNumber<<endl;
	return 0;
	
	
} 
