// Calculator.cpp - CIS279 - 2017
// Diogo M Delgado
#include "calculator.h"
using namespace std;

class AddSubMult {
	public:
		static const int STARTING_BALANCE = 0; 
		AddSubMult();
		int getTotal();
		bool addNum(int amount);
		bool subNum(int amount);
		bool multNum(int amount);
 	private:
		int total;
	//constructors
	AddSubMult() {
		this.total = STARTING_BALANCE;
	}
	//accessor
	int getTotal() {
		return this.total;
	}
	//mutators
	bool addNum(int amount) {
		if (amount >= 0) {
			this.total = this.total + amount;
			return true;
		}
		else {
			return false;
		}
	}
	bool subNum(int amount) {
		if (amount >= 0) {
			this.total = this.total - amount;
			return true;
		}
		else {
			return false;
		}
	}
	bool multNum(int amount) {
		if (amount > 0) {
			this.total = this.total * amount;
			return true;
		}
		else {
			return false;
		}
	}
}