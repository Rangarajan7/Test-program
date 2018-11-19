#include <iostream>
using namespace std;

int Repeat(int* array, int n)
{
	
	for (int i = 0; i< n; i++)
	{
		array[array[i]%n] += n;
	}
	int max_element = INT_MIN,result = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] > max_element)
		{
			max_element = array[i];
			result = i;
		}
	}

	for (int i = 0; i< n; i++)
	{
		array[i] = array[i]%n; 
	}
	return result;
}


int main()
{
	int input_array[] = {3, 3, 4, 4, 5, 5, 2, 3, 6, 7, 8, 3};
	int n = sizeof(input_array)/sizeof(int);
	cout<<"Maximum repeating element is: "<<MaxRepertingElement(input_array, n)<<endl;
	return 0;
}