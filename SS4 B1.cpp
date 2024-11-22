#include <stdIo.h>

int main(){
	int n;
	printf("moi ban nhap so nguyen can xac nhan! ");
	scanf("%d",&n);
	if(0<n) {
		printf("so %d la so duong",n);
	} else {
		printf("so %d la so am",n);
	}
	return 0;
} 

