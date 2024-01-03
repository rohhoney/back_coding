#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//1번블록으로 끝날때,,, 2번끝날때,,, 각각의 케이스들의 어레이 포인터
typedef struct
{
	Case *block;

}Cases;

//각 케이스별로 높이의 종류와, 각 높이별 개수
typedef struct
{
	int *h_arr;
	int *each_counter;
	int total_counter;

}Case;


//각 입력(3줄) 별로 계산하기, 실질적으로 이게 프로그램이지.
int tower_case(FILE *fp, Cases *cases);


//각 케이스별 계산하기, 배열에 높이 넣고 높이별 개수 할당
void block_n_heights(*Case block, *int input_arr, *int hole_arr);



int main(void)
{
	FILE *fp



	fopen(fp,"input5.txt", 'r');

	for(int i = 0; i < 10; i++)
		int answer;
		answer = tower_case(fp);
		printf("#%d %d", i+1, a);


	return 0;

}



//각 입력(3줄) 별로 계산하기, 실질적으로 이게 프로그램이지.
int tower_case(FILE *fp)
{
		int n, h;
		fscanf("%d %d", &n, &h);

		Cases* cases = (Cases*)malloc(sizeof(Cases)); //free 하면 체크
		

		Case* cases->block = (Case*)malloc(sizeof(Case)*n); //free 하면 체크
		int *input_arr = (int*)malloc(sizeof(int)*n); //free 하면 체크
		int *hole_arr = (int*)malloc(sizeof(int)*(n-1)); //free 하면 체크 
		
		//입력값 저장
		for (int i = 0 ; i < n; i++)
			fscanf(fp, "%d", &input_arr[i]);
		//구멍크기 저장
		for (int i = 0; i< n-1; i++)
			fscanf(fp, "%d", &hole_arr[i]);

		Case* block = Cases -> block;
				
		//1,2번 케이스는 수동으로
		block -> h_arr = (int*)calloc(sizeof(int)*1); //free 하면 체크 
		block -> h_arr + 1 = (int *)calloc(sizeof(int)*1); //free 하면 체크 
		if(hole_arr[0] < h)
		{
				

		} 

		if(hole_arr[1])

		for(int i=2; i < n; i++)
			block_n_heights(block+i);

		int sum = 0;

		for(int i=0; i < n; i++)
		{
			sum =+ (block+i)->counter;
		}

		
		free(input_arr);
		
		return sum;		fscanf("%d %d", &n, &h);

		Cases* cases = (Case*)malloc(sizeof(Case)*n);
		int *input_arr = (int*)malloc(sizeof(int)*n);
		int *hole_arr = (int*)malloc(sizeof(int)*(n-1));
		//입력값 저장
		for (int i = 0 ; i < n; i++)
			fscanf(fp, "%d", &input_arr[i]);
		//구멍크기 저장
		for (int i = 0; i< n-1; i++)
			fscanf(fp, "%d", &hole_arr[i]);

		Cases* cases = (Case*)malloc(sizeof(Case)*n);
		Case* block = blocks->block;
				
		//1,2번 케이스는 수동으로
		block -> h_arr = (int*)calloc(sizeof(int)*1);
		block -> h_arr + 1 = (int *)calloc(sizeof(int)*1);
		if(hole_arr[0] < h)
		{
				

		} 

		if(hole_arr[1])

		for(int i=2; i < n; i++)
			block_n_heights(block+i);

		int sum = 0;

		for(int i=0; i < n; i++)
		{
			sum =+ (block+i)->counter;
		}

		
		free(input_arr);
		
		return sum;
}

//각 케이스별 계산하기, 배열에 높이 넣고 높이별 개수 할당
void block_n_heights(*Case block, *int input_arr, *int hole_arr)
{

}




