#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap 3 so nguyen: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c && b>c){
		printf("Thu tu tang dan: %d %d %d",c,b,a);
	} else if(a<b && a<c && b>c){
		printf("Thu tu tang dan: %d %d %d",a,c,b);
	} else if(a<b && a<c && b<c){
		printf("Thu tu tang dan: %d %d %d",a,b,c);
	} else if(b<a && b<c && a<c){
	    printf("Thu tu tang dan: %d %d %d",b,a,c);
	} else if(a>b && a>c && b<c){
		printf("Thu tu tang dan: %d %d %d",b,c,a);
	} else if(b>a && b>c && a>c){
		printf("Thu tu tang dan: %d %d %d",c,a,b);
	} 
	return 0;
}
