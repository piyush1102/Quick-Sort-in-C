#include<stdio.h>
void swap(int*p,int*q)
{ int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int partion(int a[],int start,int end)
{
	int left=start+1,right=end,pivot_val=a[start];
	while(left<=right)
	{
	while(pivot_val>= a[left])
	left++;
	while(pivot_val<a[right])
	right--;
	if(left<=right)
	swap(&a[left],&a[right]);
	}
	a[start]=a[right];
	a[right]=pivot_val;
	return right;
}
void Quicksort(int *a,int start,int end)
{
	int i,pivot;
	if(start<end)
	{
		pivot=partion(a,start,end);
		Quicksort(a,start,pivot-1);
		Quicksort(a,pivot+1,end);
	}
	
}
main()
{
	int n,a[50],i;
	puts("Enter the range");
	scanf("%d",&n);
	puts("Enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	Quicksort(a,0,n-1);
	puts("Sorted elements are:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
