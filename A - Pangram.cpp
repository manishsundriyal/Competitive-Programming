#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;
	string str;
	cin>>str;
	int freq[26]={};
	for(int i=0;i<str.size();++i){
		if(isupper(str[i]))	freq[str[i]-'A']+=1;
		else freq[str[i]-'a']+=1;
	}
	bool flag=true;
	for(int i=0;i<26;++i){
		if(freq[i]==0){
			flag = false;
			break;
		}
	}
	if(flag) cout<<"YES";
	else cout<<"NO";

	return 0;
}