#include<stdio.h>
void solveHanoi(int n,char s,char i,char t);
int main(){
	printf("Enter number of pegs\n");
	int n;
	char s,t,i;
	s='s';
	t='t';
	i='i';
	scanf("%d",&n);
	solveHanoi(n,s,i,t);
}
void solveHanoi(int n,char s,char i,char t){
	if(n>1){
		solveHanoi(n-1,s,t,i);
		printf("Move %d from %c to %c\n",n,s,t );
		solveHanoi(n-1,i,s,t);

	}
	else if(n==1){
		printf("Move %d from %c to %c\n",n,s,t );
	}
}