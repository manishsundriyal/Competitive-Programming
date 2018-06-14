#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>arr[i][j];
		}
	}
	vector<int> ans;
	int freq[n]={};

	for(int i=0;i<n;++i){
		int inp = INT_MIN;
		for(int j=0;j<n;++j){
			inp = max(inp,arr[i][j]);
		}
		ans.push_back(inp);
		freq[inp-1]++;
	}
	int x ;
	for(int i=0;i<n;++i){
		if(freq[i]>=1){
			x = i+1;
		}
	}
	for(int i=0;i<ans.size();++i){
		if(ans[i]==x){
			ans[i] = n;
			break;
		}
	}
	for(int i=0;i<ans.size();++i){
		cout<<ans[i]<<" ";
	}
 	return 0;
}