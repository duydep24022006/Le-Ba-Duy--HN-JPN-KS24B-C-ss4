#include <stdio.h>

int main(){
	int sddt, sdct, hsd, s;
	printf("moi ban nhap so dien dau thang ");
	scanf("%d",&sddt);
	printf("moi ban nhap so dien cuoi thang ");
	scanf("%d",&sdct);
	hsd = sdct - sddt;
	
	if(0<=hsd && hsd<50){
		s = hsd * 10; 
		printf("tien dien thang nay cua ban la %d",s); 
	}else if(50<=hsd && hsd<100){
		s = hsd * 15; 
		printf("tien dien thang nay cua ban la %d",s);	
	}else if(50<=hsd && hsd<100){
		s = hsd * 20; 
		printf("tien dien thang nay cua ban la %d",s);
	}else if(100<=hsd && hsd<150){
		s = hsd * 25; 
		printf("tien dien thang nay cua ban la %d",s);
	}else {
		s = hsd * 30; 
		printf("tien dien thang nay cua ban la %d",s);
	}
	return 0; 
}
