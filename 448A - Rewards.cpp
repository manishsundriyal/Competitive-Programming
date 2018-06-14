#include<bits/stdc++.h>
using namespace std;

int main(){

	int noOfCups=0;
	int noOfMedals=0;
	int n;
	cin>>n; noOfCups+=n; cin>>n; noOfCups+=n; cin>>n; noOfCups+=n;
	cin>>n; noOfMedals+=n; cin>>n; noOfMedals+=n; cin>>n; noOfMedals+=n;
	cin>>n;

	n = n - ceil(noOfCups/5.0);
	n = n - ceil(noOfMedals/10.0);
	if(n<0) cout<<"NO";
	else cout<<"YES";
 	return 0;
}