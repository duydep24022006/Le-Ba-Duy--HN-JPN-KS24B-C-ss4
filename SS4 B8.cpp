#include <stdio.h>

int main(){
	int a, b, c;
	printf("moi ban nhap do dai canh a! \n");
	scanf("%d",&a);
	printf("moi ban nhap do dai canh b! \n");
	scanf("%d",&b);
	printf("moi ban nhap do dai canh c! \n");
	scanf("%d",&c);
	 if(0<a && 0<b && 0<c && (a + b > c) && (c + b > a) && (a + c > b)){
	 	printf(" Là 3 cạnh tam giác"); 
	 }else {
	 	printf("Không phải 3 cạnh tam giác"); 
	 } 
	 return 0;
}
	 
