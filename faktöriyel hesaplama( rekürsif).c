#include <stdio.h>
int Fact(int x){
	if(x == 1)
	return 1;
	return x * Fact (x-1) ;
}

int main(){
	int x;
	printf("Lütfen bir sayi giriniz:");
	scanf("%d", &x);
	
	printf("%d", Fact(x));
	return 0;
}
