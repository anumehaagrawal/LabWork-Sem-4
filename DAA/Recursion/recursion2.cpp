#include<bits/stdc++.h>
using namespace std;
void permute(string s,int l,int r);
int main(){
	string s,s2;
	cin>>s;
	permute(s,0,s.length()-1);
}


void permute(string s,int l,int r){
	if(l==r){
		cout<<s<<endl;
	}
	else{
		for(int i=l;i<=r;i++){
		swap(s[l], s[l+i]);
		permute(s,l+1,r);
		swap(s[l],s[l+i]);
	}
}
}
