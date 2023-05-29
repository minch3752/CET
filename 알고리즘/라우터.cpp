#include<iostream>
#include<queue>

using namespace std;

int main(){
	queue<int>q;
	
	int n, m;
	
	cin >> n ;
	
	do{
		cin >> m;
		if(m>0 && q.size()<n){
			q.push(m);
		}else if(m==0){
			q.pop();
		}else if(m==-1){
			break;
		}
	}while(n<100000);
	
	if(q.empty()){
		cout << "empty";
	}else{
		for(int i=0; i<n; i++){
			if(q.empty()){
				break;
			} 
			cout << q.front() << " ";
			q.pop();
		}
	}
	
	return 0;
}
