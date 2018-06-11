#include<bits/stdc++.h>

using namespace std;
int main(){

	int n;
	cin>>n;
	int before[n],after[n];
	bool isSorted = true;
	bool isChange = false;

	for(int i=0;i<n;++i){
		cin>>before[i]>>after[i];
		if(before[i]!=after[i]) isChange=true;
		if(i!=0&&before[i-1]<before[i]) isSorted=false;
	}


	if(!isChange){
		if(isSorted){
			cout<<"maybe";
		}
		else cout<<"unrated";
	}
	else cout<<"rated";

	return 0;
}