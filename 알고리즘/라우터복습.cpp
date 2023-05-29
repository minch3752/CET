#include<iostream>
#include<queue>

using namespace std;

int main(){
	queue<int>q;
	
	int n, m, a;
	
	cin >> n;
	
	do{
		cin >> m;
		
		if(m==0){
			q.pop();
		}else if(m==-1){
			break;
		}else if(m>0 && q.size()<n){
			q.push(m);
		}
		
	}while(n<100001);
	
	a=q.size();
	
	if(q.empty()){
		cout << "empty";
	}else{
		if(q.size()<=n){
			for(int i=0; i<a; i++){
				cout << q.front() << " ";
				q.pop();
			}
		}else{
			for(int i=0; i<n; i++){
			cout << q.front() << " ";
			q.pop();
		}
		}
	}
	
	return 0;
}
