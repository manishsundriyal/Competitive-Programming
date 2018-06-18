#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, d;
	cin>>n>>d;
	int a[n],b[n];
	int rangex,rangey;
	for(int i=0;i<n;++i){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;++i){
		if(i==0){
			rangex = a[i];
			rangey = b[i];
		}
		else{
			if(a[i]<=rangey){
				if(rangey<b[i]){
					rangey=b[i];
				}
			}
		}
	}
	if(rangex==0&&rangey>=d){
		cout<<"YES";
	}
	else cout<<"NO";
 	return 0;
}