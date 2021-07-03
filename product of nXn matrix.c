#include<stdio.h>
main(){
	register int i,j,k; int matrix1[10][10],matrix2[10][10], product_ofmatrix1and2[10][10],a;
	int c[10][10];
	product_ofmatrix1and2[10][10]=c[10][10]; 
	printf("Enter the order of the square matrix1 and matrix2: ");
	scanf("%d",&a);
	printf("Enter the elements of matrix1:\n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
		printf("matrix1[%d][%d]= ",i,j);
		scanf("%d",&matrix1[i][j]);
	} 
}
	printf("Enter the elements of matrix2:\n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
		printf("matrix2[%d][%d]= ",i,j);
		scanf("%d",&matrix2[i][j]);
	}
}
	printf("So the entered matrices is---->>>>\n");
		for(i=0;i<a;i++){
		for(j=0;j<a;j++){
		printf("%d\t",matrix1[i][j]);
	} 
	printf("\n");
	} 
	printf("\n");
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
		printf("%d\t",matrix2[i][j]);
	} 
	printf("\n");
	}
	for(i=0;i<a;i++){
		for(j=0;j<a;j++){
		c[i][j]=0;
		for(k=0;k<a;k++){
			c[i][j]=c[i][j]+matrix1[i][k]*matrix2[k][j];
		}
		}
	}
	printf("Product of Two Matrices are:\n");
		for(i=0;i<a;i++){
		    for(j=0;j<a;j++){
				printf("%d\t",c[i][j]);
		} 
		printf("\n");
	}
	}
