#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

//Add an argurment to the data structure or update the data structure
void addTo_LRU(int x)
{
		


}


//Remove the first argument (least recent used)
int remove_LRU()
{
	
	return 0;
}



//Print the arguments in the correct order (least recent used first)
void print_LRU()
{


}

int main()
{

	int arr[]={3, 5, 7, 8, 15, 32, 16, 9, 3, 4, 6, 13};
	int arrlength = sizeof(arr)/sizeof(int); //array length
	int i;
	for(i=0; i<arrlength; i++)
	{
		addTo_LRU(arr[i]);
		
	}
	print_LRU();
	addTo_LRU(7);
	int x= remove_LRU();
	printf("the number which removed is: %d \n", x);
	print_LRU();
	
	return 0;
}
