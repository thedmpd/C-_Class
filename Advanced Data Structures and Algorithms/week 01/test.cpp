#include <iostream>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

void	merge(std::list<int> *listOne, std::list<int> *listTwo, std::list<int> *outPut){
	//merge-sort
	while (!(listOne->empty()) && !(listTwo->empty())){

		if (listOne->front() > listTwo->front()){
			outPut->push_back(listTwo->front());
			listTwo->pop_front();
		}
		else {
			outPut->push_back(listOne->front());
			listOne->pop_front();
		}
	}
	//finish the lists in the case of one being larger than its counterpart
	while (!(listOne->empty()) || !(listTwo->empty())){

		if (!(listOne->empty())){
			outPut->push_back(listOne->front());
			listOne->pop_front();
		}
		else {
			outPut->push_back(listTwo->front());
			listTwo->pop_front();
		}
	}

}

int		main(){

	std::list<int> firstList = {3, 2, 4, 1, 89, 54, 232, 434, 21, 323, 45, 546, 654};
	std::list<int> secondList = {6, 3, 1, 7, 8,11,23,43,22,334,5522,22,11,1122,232,121,121,232};
	std::list<int> finalList;

	firstList.sort();
	secondList.sort();

	merge(&firstList, &secondList, &finalList);

	for (list<int>::iterator i = finalList.begin(); i!= finalList.end(); ++i){
		cout << *i << endl;
	}
}