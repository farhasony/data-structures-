/********************Heap Sort****************/

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
#define MAX 1000

void Heap_sort(int *,int);
void Heap_adjust(int *,int,int);
void Input(int *,int);
void Display(int *,int);

int main()
{
	int arr[MAX];
	Input(arr,MAX);
	printf("elements before sorting\n");
	Display(arr,MAX);
	Heap_sort(arr,MAX);
	printf("elements after sorting\n");
	Display(arr,MAX);
}
void Input(int *ptr,int size)
{
	int i=0;
	srand(getpid());
	for(i=0;i<size;i++)
	ptr[i]=rand()%1000;
}
void Display(int *ptr,int size)
{
	int i=0;
	for(i=0;i<size;i++)
	printf("%d ",ptr[i]);
	printf("\n");
}
void Heap_sort(int *ptr,int size )
{	int temp,i;
	for (i = size / 2 - 1; i >= 0; i--)
		    Heap_adjust(ptr,size, i);

	  for (i = size- 1; i >= 0; i--) 
	 {
		    //Swapping Values 
		    temp = ptr[0];
		    ptr[0] = ptr[i];
		    ptr[i] = temp;
	    Heap_adjust(ptr,i, 0);
	}
  }


void Heap_adjust(int *ptr,int size,int i)
{
  int large = i, left = 2 * i + 1, right = 2 * i + 2,temp=0;

  // comparing with  left child
  if (left < size && ptr[left] > ptr[large])
    large = left;

  // comparing with  right child
  if (right < size && ptr[right] > ptr[large])
    large = right;


  if (large != i) {
    //Swapping parent values with child whose value is greaterthan parent
    temp = ptr[i];
    ptr[i] = ptr[large];
    ptr[large] = temp;
    Heap_adjust(ptr,size, large);
  }
}
