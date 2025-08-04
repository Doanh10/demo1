#include<stdio.h>
int main(){
	int A;
	printf("Nhap A=\n");
	scanf("%d",&A);
	if(A >= 9){
		printf("Xuat sac!")
	}else{
		if(A >= 8){
			printf("Gioi!");
		}else{
			if(A >= 5){
				printf("Trung binh!");
			}else{
				printf("Yeu!");
			}
		}
	}
}
