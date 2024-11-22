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
	 	printf("du dieu kien tao thanh 1 tam giac"); 
	 }else {
	 	printf("khong du dieu kien tao thanh 1 tam giac"); 
	 } 
	 return 0;
}
	 
