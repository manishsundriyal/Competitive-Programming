#include<bits/stdc++.h>
using namespace std;

int main(){

	int size;
	while(cin>>size){
		if(size==0) break;

		char str[size];
		cin>>str;
		bool isZ = false;
		for(int i=0;i<size;++i){
			if(str[i]=='Z'){
				isZ = true;
				break;
			}
		}
		if(isZ) cout<<"0"<<endl;
		else{
			bool check1 = false;
			bool check2 = false;
			int count = 0;
			int distance = INT_MAX;
			for(int i=0;i<size;++i){

				if(str[i]=='R'){

					if(check2){
						distance = min(distance,count);
					}
					count=1;
					check2 = false;
					check1 = true;
					continue;
				}
				else if(str[i]=='D'){
					
					if(check1){
						distance = min(distance,count);
					}
					count=1;
					check1 = false;
					check2 = true;
					continue;
				}
				count++;
			}
			cout<<distance<<endl;
		}

	}

	return 0;
}