#include <stdio.h>

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int binarySearch(int arr[], int left, int right, int x)
{
	if (right >= left)
	{
		int mid = left + (right - left) / 2;
		
		if (arr[mid] == x)
		{
			return mid;
		}
		
		if (arr[mid] > x)
		{
			return binarySearch(arr, left, mid-1, x);
		}
		
		return binarySearch(arr, mid+1, right, x);
	}
	
	return -1;
}

int main()
{
	int lista[9] = {5,4,8,7,10,12,1,111,15};
	int n = sizeof(lista)/sizeof(lista[0]); 
	int x;
	printf("Array original: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", lista[i]);
	}
	printf("\n");
	
	bubbleSort(lista, n); 
	
	printf("Array ordenado: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", lista[i]);
	}
	printf("\n");
	printf("\nQue elemento desea bsucar: ");
	scanf("%d",&x);
	int result = binarySearch(lista, 0, n-1, x);
	
	if (result == -1)
	{
		printf("El elemento %d no se encuentra en el array.\n", x);
	}
	else
	{
		printf("El elemento %d se encuentra en la posición %d del array.\n", x, result);
	}
	
	return 0;
}
