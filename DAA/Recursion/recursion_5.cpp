#include<bits/stdc++.h>
using namespace std;
int longest(vector<int> a,vector<int> b,int m , int n);
int main()
{
	vector<int> a,b;
	a.push_back(3);
	a.push_back(5);
	a.push_back(4);
	a.push_back(7);
	a.push_back(1);
	b.push_back(3);
	b.push_back(3);
	b.push_back(4);
	b.push_back(3);
	b.push_back(8);
	cout<<longest(a,b,5,5);
}
int longest(vector<int> a,vector<int> b,int m , int n){
	if(m==0 ||n==0){
		return 0;
	}

	if(a.at(m-1)==b.at(n-1)){
		return 1+longest(a,b,m-1,n-1);
	}
	return max(longest(a,b,m-1,n),longest(a,b,m,n-1));
}