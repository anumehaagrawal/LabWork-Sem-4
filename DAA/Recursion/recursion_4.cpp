#include<bits/stdc++.h>
using namespace std;
int find_sum(vector<int> a,int sum,int temp);
int main()
{
	vector<int> a;
	a.push_back(12);
	a.push_back(3);
	a.push_back(4);
	a.push_back(-3);
	int sum=13;
	int num=4;
	cout<<(find_sum(a,sum,num));
}

int find_sum(vector<int> a,int sum,int num){
	if(sum==0){
		return 1;
	}
	if(num==0 && sum!=0){
		return 0;
	}
	if(a.at(num-1)>sum){
		return find_sum(a,sum,num-1);
	}
	else{
		return find_sum(a,sum,num-1)|| find_sum(a,sum-a.at(num-1),num-1);
	}
	

}