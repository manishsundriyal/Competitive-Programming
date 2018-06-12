#include <iostream>
#include <stack>
using namespace std;
int main() {

	int t; cin>>t;

	while(t--){	
		string expr;
		cin>>expr;

		stack<char> ops;
		for(int i=0;expr[i]!='\0';++i){
			if(expr[i]=='+'||expr[i]=='-'||expr[i]=='*'||expr[i]=='/'||expr[i]=='^'){
				ops.push(expr[i]);
			}
			else if(expr[i]==')'){
				if(!ops.empty()){
					cout<<ops.top();
					ops.pop();
				}
			}
			else if(expr[i]=='('){}
			else cout<<expr[i];
		}
		while(!ops.empty()){
			cout<<ops.top();
			ops.pop();
		}
		cout<<endl;
	}
	return 0;
}