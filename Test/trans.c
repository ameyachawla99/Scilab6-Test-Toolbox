void transpose(int *a,int n, int m)
{
// Declaring all the variables
	int transpose1[m][n],i=0,j=0;
	
// Iterating over the matrix and assignment of values to transpose1 matrix	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			transpose1[j][i]=*(a+i*m+j);


// Printing Transposed matrix
	printf("Transposed Matrix: \n");
	for(i=0;i<m;i++)
	{	for(j=0;j<n;j++) 
		{
			
			printf("%d ",transpose1[i][j]);
		}
		printf("\n");
	
	}


}
