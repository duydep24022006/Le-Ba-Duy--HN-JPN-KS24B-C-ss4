#include <stdio.h>

int main(){
	int n, number1, number2, number3;
	printf("moi ban nhap so can xac minh: ");
	scanf("%d",&n);
	
    number1 = (n / 100) % 10;   
    number2 = (n / 10) % 10;    
    number3 = n % 10; 
	if(number3>number2 && number3<number1 ||number3<number2 && number3>number1){
		printf("so %d nam giua hai so %d va %d",number3,number2,number3);
	}else {
		printf("so %d khong nam giua hai so %d va %d",number3,number2,number3);
	}
	return 0;         
}
