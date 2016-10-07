/*
Diogo M Delgado 10/3/2016
Application of Binary Search in thirds. Creating a Ternary Search algorithm.
*/
using namespace std;

template <typename ArrayLike, typename T>
int	ternary_search(const ArrayLike& array, const T& value, int low, int high){

	int first;
	int second;

	first = ((high - low)/3) + low; 
	second = (2 * (high - low)/3) + low;
	//cout << "value search: " << value << endl;
	//cout << array[low] << " " << first << " " << second << " " << endl; 
	if (low == high){
		return (-1);
	}
	else if (value == array[first]){
		return (first);
	}
	else if (array[first] > value){
		return ternary_search(array, value, low, first);
	}
	else if (value == array[second]){
		return (second);
	}
	else if (array[second] > value){
		return ternary_search(array, value, first + 1, second);
	}
	else {
		return ternary_search(array, value, second + 1, high);
	}
	return (-1);
}
