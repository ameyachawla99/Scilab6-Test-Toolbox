#include<stdio.h>
#include "trans.c"
#include<malloc.h>
void main()
{
	int i,j,n,m,k;
	int* a;//Pointer for the first matrix to be transposed
	int* t;//Pointer for the transpose of first matrix
	
	printf("Enter number of rows : ");
        scanf("%d", &n);
	printf("Enter number of columns : ");
    	scanf("%d", &m);

	a=(int *)malloc(n*m*sizeof(int));
	
	
	printf("Enter the Elements of the matrix :\n");
	
	//Taking the matrix as input
	for(i=0;i<n;i++)
		for(j=0;j<m;j++) 
		{
			scanf("%d",&k);
			*(a+i*m+j)=k;
		}
		
	transpose(a,n,m);
	//Transposed matrix
	

}


