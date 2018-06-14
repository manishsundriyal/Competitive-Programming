#include<bits/stdc++.h>
using namespace std;
int main(){

	int n;
	cin>>n;
	int noOfTwos=0;
	int count=0;
	if(n%2!=0){
		count++;
		n-=3;
		if(n>0){
			count+=(n/2);
			noOfTwos+=(n/2);
		}
		cout<<count<<endl;
		cout<<"3 ";
		while(noOfTwos--){
			cout<<"2 ";
		}
	}
	else{
		count +=(n/2);
		noOfTwos+=(n/2);
		cout<<count<<endl;
		while(noOfTwos--){
			cout<<"2 ";
		}
	}

 	return 0;
}