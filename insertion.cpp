#include<stdlib.h>
#include<stdio.h>
int main(){
	int t[10];
	int i,k,n,val;
	for(i=0; i<=9; i++){
		printf("entrer les valeurs",i);
		scanf("%d",&t[i]);
	}
	n=10;
	for(i=1; i<=9; i++){
		val=t[i];
		k=i-1;
		while(k>=1 && t[k]>val){
			t[k+1]=t[k];
			k=k-1;
		}
		t[k+1]=val;
	}
	printf("tableau trie");
	for(i=0; i<=9; i++){
		printf("%d\t",t[i]);
	}
}