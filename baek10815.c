#include <stdio.h>
#include <stdlib.h>

int b_search(int *arr, int x, int y);
int compar_int(const void *elem1, const void *elem2);

int main(void)
{

	int N, M;

	int *arr;
	int *arr2;
	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N);

	for(int i =0; i < N; i++){

		int a;
		scanf("%d", &a);
		arr[i] = a;
	}

	scanf("%d",&M);

	arr2 = (int*)malloc(sizeof(int)*M);

	for(int i = 0; i < M; i ++)
	{
		int a;
		scanf("%d", &a);
		arr2[i] = a;

	}

	qsort(arr, N, sizeof(int), compar_int);
	


	for(int i = 0; i < M;i++){
		int b, y;
		y = N;
		b = b_search(arr, arr2[i], y);

		printf("%d ",b);	
	}

	printf("\n");


	free(arr);
	free(arr2);

	return 0;

}


int compar_int(const void *elem1, const void *elem2)
{
	int e1 = *(int *)elem1;
	int e2 = *(int *)elem2;

	if (e1 > e2) return 1;
	else if (e1 == e2) return 0;
	else return -1;
}




int b_search(int *arr, int x, int y){
	int l, r, m;

	l = 0;
	r = y-1;


	while(l<=r){
		m = (l+r) >> 1;

		if(arr[m] == x) return 1;
		if(arr[m] < x) l = m+1;
		else r = m-1; 




	}


	return 0;

}