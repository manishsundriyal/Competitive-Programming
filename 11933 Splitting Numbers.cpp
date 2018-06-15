#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	while(cin>>n){
		if(n==0) break;
		vector<int> binary;

		for(int i=31;i>=0;--i){
			int k = n>>i;
			if(k&1) binary.push_back(1);
			else binary.push_back(0);
		}

		int j=0;
		int a=0,b=0;
		bool flag = false;
		for(int i=31;i>=0;--i,++j){
			
			if(binary[i]==1){
				flag = ! flag;
				if(flag) a = a | (1<<j);
				else b = b | (1<<j);
			}
		}
		cout<<a<<" "<<b<<endl;
	}
 	return 0;
}