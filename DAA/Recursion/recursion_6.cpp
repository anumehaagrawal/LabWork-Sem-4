/* No. of ones in sorted array */
#include<bits/stdc++.h>
using namespace std;
int countl(int a[] ,int n);
int main(){
	int a[9]={0,0,0,0,1,1,1,1,1};
	cout<<countl(a,9);
}

int countl(int a[] ,int n){
	if(a[n-1]==0){
		return 0;
	}
	if(a[0]){
		return n; 
	}
	return countl(a,n/2)+countl(a+n/2,n/2);

}