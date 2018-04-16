#include<bits/stdc++.h>
using namespace std;
void reverse(string s);
int main(){
	string s,s2;
	cin>>s;
	reverse(s);

}

void reverse(string s){
	int m=s.length();
	if(m>0){
		cout<<s[m-1];
		return reverse(s.substr(0,m-1));
	}
	
}