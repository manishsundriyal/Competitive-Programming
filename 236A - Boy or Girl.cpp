#include<bits/stdc++.h>
using namespace std;
	int main(){
		int arr[26]={};
		string str;
		cin>>str;
		for(int i=0;i<str.size();++i){
			arr[str[i]-'a']++;
		}
		int ans=0;
		for(int i=0;i<26;++i){
			if(arr[i]>0) ++ans;
		}
		if(ans%2==0) cout<<"CHAT WITH HER!";
		else cout<<"IGNORE HIM!";
	return 0;
}