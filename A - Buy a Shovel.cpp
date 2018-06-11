#include<bits/stdc++.h>

using namespace std;
int main(){

	int k,r;
	cin>>k>>r;

	int i=1;
	while(1){

		if(((k*i)%10)==0||((k*i)%10)==r){
			break;
		}
		++i;
	}
	cout<<(k*i)/k;

	return 0;
}