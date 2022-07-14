#include<stdio.h>
#include<stdlib.h>

int A[5] = {1,2,3,4,5};

int main(void)
{
	int *p = NULL;
	p = A; //Here you can give p = &A[0];
	int (*pa)[5] = NULL;
	pa = &A;
	
	for(int i = 0; i < 5; i++)
	{
		printf("A[%d] : %d\n", i, A[i]);
		printf("A[%d] : %d\n", i, *(A+i));
		printf("A[%d] : %d\n", i, *(&A[0] + i));
		printf("A[%d] : %d\n", i, *(p +i));
		printf("A[%d] : %d\n", i, p[i]);
		printf("A[%d] : %d\n", i, *(&p[0] + i));
		printf("A[%d] : %d\n", i, *((*&A) + i));
		printf("A[%d] : %d\n", i, *((*pa) + i));
		printf("A[%d] : %d\n", i, (*pa)[i]);
	}
	return (EXIT_SUCCESS);
}