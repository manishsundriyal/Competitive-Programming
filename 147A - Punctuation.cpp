#include<bits/stdc++.h>
using namespace std;
void setBeforeSpace(string &str){

	for(int i=0;i<str.size();++i){
		if(str[i]=='.'||str[i]==','||str[i]=='!'||str[i]=='?'){
			int index = i-1;
			while(index>=0&&str[index]==' '){
				str.erase(str.begin()+index,str.begin()+index+1);
				--i;
				--index;
			}
		}
	}
}
void setAfterSpace(string &str){

	for(int i=0;i<str.size();++i){
		if(str[i]=='.'||str[i]==','||str[i]=='!'||str[i]=='?'){
			int index = i+1;
			while(index<str.size()&&str[index]==' '){
				str.erase(str.begin()+index,str.begin()+index+1);
			}
			str.insert(str.begin()+i+1,' ');
		}	
	}
}
void setWordSpace(string &str){

	for(int i=0;i<str.size()-1;++i){
		if(str[i]==' '&&str[i+1]==' '){
			int index = i+1;
			while(index<str.size()&&str[index]==' '){
				str.erase(str.begin()+index,str.begin()+index+1);
			}
		}
	}
}
int main(){

	string str;
	getline(cin,str);

	setBeforeSpace(str);
	setAfterSpace(str);
	setWordSpace(str);
	cout<<str;
	return 0;
}
