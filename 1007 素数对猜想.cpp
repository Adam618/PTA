#include<iostream>
using namespace std;
bool isprime(int num){	
	for(int i=2;i*i<=num;i++){
	if(num%i==0) return false;
	}
	return true;
	
}
int main(){
	int n,count=0;
	cin >> n;
	for(int i=5;i<=n;i++){
		if(isprime(i-2)&&isprime(i)) 
		count++; 
	}
	cout << count ;
	return 0;
	
}


//#include <iostream>
//using namespace std;
//bool isprime(int a) {
//    for (int i = 2; i * i <= a; i++)
//        if (a % i == 0) return false;
//    return true;
//}
//int main() {
//    int N, cnt = 0;
//    cin >> N;
//    for (int i = 5; i <= N; i++)
//        if (isprime(i-2) && isprime(i)) cnt++;
//    cout << cnt;
//    return 0;
//}

