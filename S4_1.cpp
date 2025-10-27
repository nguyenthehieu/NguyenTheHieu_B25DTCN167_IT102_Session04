#include<stdio.h>
int main(){
	int a;
	printf("Nhap mot so nguyen: ");
	scanf("%d",&a);
	if (a>=0){
	printf("%d la so duong",a);
	} else {
	printf("%d la so am",a);
	}
    return 0;
}
