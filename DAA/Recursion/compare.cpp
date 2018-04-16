#include<bits/stdc++.h>
#include<iostream>
#include<vector>
void compare(int beg,int last,std::vector<int> v);
int main()
{
	/* code */
	int n;
	std::vector<int> v;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int el;
		scanf("%d",&el);
		v.push_back(el);
	}
	compare(0,n-1,v);
}
void compare(int beg,int last,std::vector<int> v){
	if(last>beg){
		int mid=int((last+beg)/2);
		if(v.at(mid)>v.at(mid-1) && v.at(mid)>v.at(mid+1)){
			printf("%d\n",v.at(mid+1) );
		}
		else if(v.at(mid)>v.at(mid-1)){
			compare(mid+1,last,v);
		}
		else{
			compare(beg,mid-1,v);
		}
	}
}