#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack<int> a1;
	a1.push(15);
	
	int num;
	cout<<"enter the number you want to be pushed\n";
	cin>>num;
	a1.push(num);
	
	a1.push(18);
	
	while(!a1.empty()){
		cout<<a1.top()<<endl;
		a1.pop();
	}
	return 0;
}