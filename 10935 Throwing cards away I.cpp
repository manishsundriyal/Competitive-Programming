#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	while(cin>>n){
		if(n==0) break;
		if(n==1) cout<<"Discarded cards:"<<endl<<"Remaining card: 1"<<endl;
		else{
			queue<int> q;
			for(int i=1;i<=n;++i){
				q.push(i);
			}
			cout<<"Discarded cards: ";
			int last;
			while(!q.empty()){
				int discard = q.front();
				q.pop();
				
				if(q.size()!=0) cout<<discard;
				if(q.size()>1){
					cout<<", ";
				}
				else if(q.size()==0) last = discard;
				if(q.size()!=0){
					int moveToBack = q.front();
					q.pop();
					q.push(moveToBack);
				}
			}
			cout<<endl;
			cout<<"Remaining card: "<<last;
			cout<<endl;

		}
	}
 	return 0;
}