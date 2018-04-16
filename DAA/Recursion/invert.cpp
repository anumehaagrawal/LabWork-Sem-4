#include<bits/stdc++.h>
#include<iostream>
#include<vector>
void compare(int beg,int last,std::vector<int> v,int c);
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
	int coun=0;
	compare(0,n-1,v,coun);
}
void compare(int beg,int last,std::vector<int> v,int coun){
	if(last>beg){
		int mid=int((last+beg)/2);
		if(v.at(last)<v.at(beg)){
			coun++;
		}
		compare(beg,mid,v,coun);
		compare(mid+1,last,v,coun);
	}
	printf("%d\n",coun );
}