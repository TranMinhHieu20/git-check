#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
 
void nhap(int *a, int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n ; j++){
			printf("a[%d][%d]= ",i ,j);
			scanf("%d",(a + i*n + j)); 
		} 
	} 
}

void xuat(int *a, int n){
	printf("Mang:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n ; j++){
			printf("%-5d",*(a + i*n + j));
		} 
		printf("\n");
	} 
}  

int tong(int *a, int n){
	int tong = 0;
	
	for(int i = 0; i < n; i++){
		tong += *(a + i*n + i);
	}
	printf("\nTong cac phan tu nam tren duong cheo chinh la: %d",tong);
	return 0;
}

void Sxep(int *a ,int n){
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n ;j++){
			if(*(a + i*n + 0) < *(a + j*n + 0)){
				int temp = *(a + i*n + 0) ;
				*(a + i*n + 0) = *(a + j*n + 0);
				*(a + j*n + 0) = temp;
			}
		}
	}
}
int main(){
	int *a, n;
	printf("Nhap ma tran n*n: ");scanf("%d",&n);
	a = (int*)malloc(n * n * sizeof(int ));
	nhap(a, n);
	xuat(a, n);
	tong(a, n);
	printf("\nMang sau khi sxep tren cot 0 la:\n");
	Sxep(a, n);
	xuat(a, n);

	free(a);
	return 0; 
} 
