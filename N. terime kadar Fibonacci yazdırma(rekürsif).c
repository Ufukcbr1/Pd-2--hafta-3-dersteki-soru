#include <stdio.h>
int Fibonacci(int y){
	if(y==0 || y==1)
	return y;
	return Fibonacci(y-1) + Fibonacci(y-2);
} 

int main(){
	int y, i;
	printf(" Lütfen bir sayi giriniz:");
	scanf("%d", &y);
	
	for(i=1; i<=y; i++){
	   printf("%d\n", Fibonacci(i));}
	   return 0;
}
