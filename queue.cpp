#include <iostream>
#include <queue>
using namespace std;

//printing the queue
void showq(queue<int> gq){
	queue<int> g=gq;
	while(!g.empty()){
		cout<<g.front()<<endl;
		g.pop();
	}
}

int main(){
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	
	cout<<"The size of the gquiz is\n"<<gquiz.size()<<endl;
	cout<<"The first element in gquiz is \n"<<gquiz.front()<<endl;
	cout<<"The last element in gquiz is \n"<<gquiz.back()<<endl;
	
	
	//displaying the queue
	showq(gquiz);
	
	
	gquiz.pop();
	return 0;
}
