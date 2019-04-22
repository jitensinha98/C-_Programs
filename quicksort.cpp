#include<iostream>
using namespace std;
void quicksort(int a[],int first,int last)
	{
	int pivot,temp,i,j;
	if(first < last)
		{
		pivot = first;
		i = first;
		j = last;
		while ( i < j )
			{
			while (a[i] <= a[pivot] && i < last)
				i ++;
			while ( a[j] > a[pivot] )
				j --;
			if ( i < j )
				{
				temp=a[i];
           		 	a[i]=a[j];
            			a[j]=temp;
        			}
      			}

      			temp=a[pivot];
      			a[pivot]=a[j];
     	 		a[j]=temp;
      			quicksort(a,first,j-1);
      			quicksort(a,j+1,last);

   		}
	}
int main()
	{
	int i, size, a[100];

   	cout << "Enter array limit : \n";
   	cin >> size;

   	cout << "Enter Array elements : \n";
   	for(i=0;i<size;i++)
      		cin >> a[i];

   	quicksort(a,0,size-1);

   	cout << "Sorted Array :\n";
   	for(i=0;i<size;i++)
      		cout << a[i] << " ";
	}
			
			
	
