#include<stdio.h>
int main(){
	int so;
	printf("nhap vao mot so nguyen: ");
	scanf("%d",&so);
	printf("cac uoc cua %d la:\n ", so);
	for(int i=1;i<=so;i++){
		if(so%i==0){
			printf("%d\n", i);
		}
	}
	return 0;
}
