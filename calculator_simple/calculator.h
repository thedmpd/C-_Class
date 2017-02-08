// Calculator.h - CIS279 - 2017
// Diogo M Delgado
#ifndef DIOGO_DELGADO_ADDSUBMULT_H
#define DIOGO_DELGADO_ADDSUBMULT_H

#include <iostream>
#include <string>
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
};

#endif