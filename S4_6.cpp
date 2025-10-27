#include<stdio.h>
int main (){
	float a,b,sodien;
	printf("Chi so cu: ");
	scanf("%f",&a);
	printf("Chi so moi: ");
	scanf("%f",&b);
	sodien=b-a;
	if(sodien>=0 && sodien<50){
		float giadien=sodien*10000;
		printf("Gia dien la: %.2f", giadien);
	} else if(sodien>=50 && sodien<100){
		float giadien=sodien*15000;
		printf("Gia dien la: %.2f", giadien);
	} else if(sodien>=100 && sodien<150){
		float giadien=sodien*20000;
		printf("Gia dien la: %.2f", giadien);
	} else if(sodien>=150 && sodien<200){
		float giadien=sodien*25000;
		printf("Gia dien la: %.2f", giadien);
	} else {
		float giadien=sodien*30000;
	}
	
	return 0;
}
