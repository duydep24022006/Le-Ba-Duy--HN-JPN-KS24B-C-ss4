#include <stdio.h>

int main(){
	int day, month, year;
	
	printf("moi ban nhap ngay! ");
	scanf("%d",&day);
	printf("moi ban nhap thang! ");
	scanf("%d",&month);
	printf("moi ban nhap nam! ");
	scanf("%d",&year);
	if(0<day && day<=31 && month==1 || 0<day && day<=31 && month==3 || 0<day && day<=31 && month==5){
		printf("Ngay %d/%d/%d hop le.\n",day, month, year);
	}else if(0<day && day<=31 && month==7 || 0<day && day<=31 && month==8 || 0<day && day<=31 && month==10 || 0<day && day<=31 && month==12){
		printf("Ngay %d/%d/%d hop le.\n",day, month, year);
	}else if(0<day && day<=30 && month==4 || 0<day && day<=30 && month==6 || 0<day && day<=30 && month==9 || 0<day && day<=30 && month==11){
		printf("Ngay %d/%d/%d hop le.\n",day, month, year); 
    }else if(0<day && day<=28 && month==2 && !(year%4==0 && !year%100==0 || year%400==0)){
		printf("Ngay %d/%d/%d hop le.\n",day, month, year);
	}else if(0<day && day<=31 && (year%4==0 && !year%100==0 || year%400==0) && day<=29 && month==2){
		printf("Ngay %d/%d/%d hop le.\n",day, month, year);
	}else {
	printf("Ngay %d/%d/%d khong hop le.\n",day, month, year); 	
	}
	return 0; 
}
