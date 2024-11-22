#include <stdio.h>

int main(){
	int n;
	printf("moi ban nhap so nam thac mac la no co phai nam nhuan khong! ");
	scanf("%d",&n);
	if(n%4==0 && !n%100==0 || n%400==0){
		printf("nam %d la nam nhuan !"); 
	}else {
		printf("nam %d khong phai la nam nhuan !"); 
	}
	return 0;  
}
