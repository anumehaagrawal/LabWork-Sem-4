#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[6]={5,6,-2,1,-3,1};
	int manx=0;
	int sum=0;
	for(int i=0;i<6;i++){
		manx=max(manx+a[i],0);
		sum=max(manx,sum);
	}
	cout<<sum;
}