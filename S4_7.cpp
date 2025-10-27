#include<stdio.h>
int main (){
	int a;
	printf("Nhap mot so nguyen dai dien cho Nam: ");
	scanf("%d",&a);
	if(a%4==0 && a%100 !=0){
		printf("Nam %d la nam nhuan.",a);
	} else if (a%400==0){
		printf("Nam %d la nam nhuan.",a);
	} else {
		printf("Nam %d khong phai la nam nhuan.",a);
	}
	return 0;
}
