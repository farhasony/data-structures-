#include<stdio.h>
#include<stdlib.h>

#define MAX 100
void Input(int *,int);
void Display(int *,int);
void insertionsort(int *,int);
 int main()
{
int arr[MAX];
Input(arr,MAX);
printf("elements before sorting\n");
Display(arr,MAX);
insertionsort(arr,MAX);
printf("elements After sorting\n");
Display(arr,MAX);
}
void insertionsort(int *a,int n)
{
int i,j,temp;
for(i=1;i<n-1;i++) // Index of unsorted array part.
{temp=a[i];
j=i-1; // highest index of sorted array part
while(j>=0 && a[j]>temp) // if j is valid index and unsorted element is smaller than sorted element
{
a[j+1]=a[j];

j--;
}
a[j+1]=temp;
}
}


void Display(int *p,int size)
{
int i;
for(i=0;i<size;i++)
printf("%d ",p[i]); // printing the elements of an array
printf("\n\n");
}
void Input(int *p,int size)
{
int i=0;
srand(getpid());
for(i=0;i<size;i++)
p[i]=rand()%500; // generating random numbers and storing  an array
}
