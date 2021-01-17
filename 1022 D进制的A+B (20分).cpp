#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	int a,b,c,n;
	cin >> a >> b >> n;
	c=a+b;
	if (c == 0) {  // if c=0,the stack is empty.
        cout << 0;
        return 0;
    }
	while(c!=0){
		s.push(c%n);
		c=c/n;
	}
	while(!s.empty()){
		cout << s.top();
		s.pop();
	}
	
}
