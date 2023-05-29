#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main(){
	
	queue<int> q;
	
	int n, m;
	string str;
	
	scanf("%d",&m);
	
	for(int i=0; i<m; i++){
		
		cin >> str;
		
			if(str=="push"){
				cin >> n;
				q.push(n);
			}
			else if(str=="pop"){
				q.pop();
			}
			else if(str=="size"){
				cout << q.size() << endl;
			}
			else if(str=="empty"){
				cout << q.empty() << endl;
			}
			else if(str=="front"){
				cout << q.front() << endl;
			}
			else if(str=="back"){
				cout << q.back() << endl;
			}
	}
	
	
	return 0;
}
