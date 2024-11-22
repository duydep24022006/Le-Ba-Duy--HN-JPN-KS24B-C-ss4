#include <stdio.h>

int main(){
	int n;
	printf("moi ban nhap so can xac minh! ");
	scanf("%d",&n);
	if(n%5==0 && n%3==0){
		printf("%d la so chia het cho 3 va 5",n);
	} else if(n%5==0){
		printf("%d la so chia het cho 5",n);
	} else if(n%3==0){
			printf("%d la so chia het cho 3",n);
	}
	return 0;
}
