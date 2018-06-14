#include<bits/stdc++.h>
using namespace std;
bool checkPossibility(int arr[],int size){
	for(int i=0;i<size;++i){
		if(arr[i]<0) return false;
	}
	return true;
}
int main(){

		int b,n;
		while(cin>>b){
			cin>>n;
			if(b==0&&n==0) break;

			int reserve[b];
			for(int i=0;i<b;++i){
				cin>>reserve[i];
			}
			for(int i=0;i<n;++i){
				int debtorBank,creditorBank,amount;
				cin>>debtorBank>>creditorBank>>amount;
				reserve[creditorBank-1]+=amount;
				reserve[debtorBank-1]-=amount;
				
			}
			if(checkPossibility(reserve,b)) cout<<"S";
			else cout<<"N";
			cout<<endl;
		}

	return 0;
}