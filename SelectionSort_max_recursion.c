#include <stdio.h>
#include <stdlib.h>
void PrintArray(int A[],int len);
void swap(int A[],int index1, int index2);
void SelectionSort(int A[],int len);
int K = 0;
int LENGTH;
int main()
{
	int A[100000] = {};
    int i,j,num,min_index,temp;
	int len=0;
	do{
		printf("請輸入大於或等於0的整數(-1為中止):");
		scanf("%d",&num);
		if (num==-1){
			break;
		}
		else if (num<0){
			printf("輸入錯誤!\n");
		}
		else{
			A[len] = num;
			len++;
		}
	} while(num!=-1);
    LENGTH = len;
    PrintArray(A,len);
//
    SelectionSort(A,len);
	
	
	system("pause");
	return 0;
}
void SelectionSort(int A[],int len)
{

    if (len == 1) {
        return;
    }

    int i, j, max_index;
    max_index = len-1;

    for (j = 0; j < len-1; j++) {
        if (A[j] > A[max_index]) {
            max_index = j;
        }
    }
    swap(A, max_index, len - 1);
    PrintArray(A, LENGTH);
    
    SelectionSort(A, len - 1);
    
}


void PrintArray(int A[],int len)
{
    int i;
    printf("pass%3d:   ",K);
    for(i=0;i<len;i++)
    {
        printf("%3d  ",A[i]);
    }
    printf("\n");
    K++;
}
void swap(int A[],int index1, int index2)
{
    int temp;
    temp = A[index1];
    A[index1] = A[index2];
    A[index2] = temp;
}
