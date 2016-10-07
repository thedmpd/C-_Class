#include <iostream>
using namespace std;

int	find_number(int a, int array[])
{
	int i;
	int counter;
	
	i  = 0;
	counter = sizeof(array);
	while (a != array[i] && counter >= 0)
	{
		i++;
		counter--;
	}
	if (counter == -1)
		return (-1);
	else
		return (i);
}

int	binary_search(int a, int array[], int low_bound, int upper_bound)
{
	int i;

	i = upper_bound / 2;
	cout << "lower: " << i << " upper: "<< upper_bound << endl;
	if (array[i] == a)
		return i;
	else if (low_bound == i)
		return (-1);
	else if (array[i] > a)
	{
		binary_search(a, array, 0, i);
	}
	else if (array[i] < a)
	{
		binary_search(a, array, i, upper_bound);
	}
}

int	find_number_recursive(int a, int array[])
{
	int upper;
	upper = sizeof(array)/sizeof(array[0]);
	cout << upper << endl;
	return (binary_search(a, array, 0, upper));
}

int	main()
{
	cout << "Hello World." << endl;
	int array[] = {2};
	int x = find_number(2, array);
	cout << x << endl;
	x = find_number_recursive(2, array);
	cout << x;
	return (0);
}
