#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin>>n;
	int a;
	cin>>a;
	int arr[n];
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	int ans=0;
	int index=0;

	while((a-1+index)<n||(a-1-index)>=0){

		if(index==0&&arr[a-1]==1){
			++ans;
		}
		else if((arr[a-1+index]==1&&a-1-index<0)||(arr[a-1-index]==1&&a-1+index>=n)){
			++ans;
		}
		else if((arr[a-1+index]==1&&arr[a-1-index]==1)){
			ans+=2;
		}
		++index;
	}
	cout<<ans;
	return 0;
}