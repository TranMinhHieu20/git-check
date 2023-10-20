#include<stdio.h>
#include<stdlib.h>

void Nhap_MT(int a[][100], int n, int m){
	for(int i =0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	} 
} 
int main(){
	int m; 

	int a[100][100];
	
	printf("nhap lan luot m: ");
	scanf("%d",&m);
	printf("matran kick thuoc m*m:\n");
	Nhap_MT(a,m,m);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < m; j++){
			printf("%d  ",a[i][j]); 
		} 
		printf("\n"); 
	} 
	int n ;
	printf("Nhap so hang , so cot kick thuoc n*m : ");
	scanf("%d%d",&n,&m);
	Nhap_MT(a,n,m); 
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				printf("%d  ",a[i][j]); 
			} 
		printf("\n"); 
	} 
	printf("nhap so hang kick thuoc  n*n : ");
	scanf("%d", &n);
	Nhap_MT(a, n, n);
	for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				printf("%d  ",a[i][j]); 
			} 
		printf("\n"); 
	} 
	return 0; 
} 
