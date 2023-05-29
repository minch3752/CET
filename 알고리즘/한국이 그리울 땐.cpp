#include<iostream>
using namespace std;

string str;
string str2;
string puf;
string suf;
int n;

int main(){
	cin >> n;
	cin >> str;
	
	int pos = str.find('*');
	
	puf = str.substr(0,pos);
	suf = str.substr(pos+1);
	
	for(int i=0; i<n; i++){
		cin >> str2;
		if(suf.size()+puf.size()>str2.size()){
			cout << "NE" << endl;
		}else{
			if(str2.substr(0,pos)==puf && str2.substr(str2.size()-suf.size())==suf){
				cout << "DA" << endl;
			}else{
				cout << "NE" << endl;
			}
		}
		
	}
	
	return 0;
}
