//
// Created by jeanpolalvarado on 16/02/17.
//

#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <vector>
#include <initializer_list>
#include "Monomial.h"
using namespace std;

class Polynomial {
private:
    vector <Monomial> elements;
    string showPolynomial;
    Monomial flag;


public:
    int cantElements;
    Polynomial(vector<Monomial>& pelements);
    Polynomial(const Polynomial& polynomialSource);
    ~Polynomial();
    const string &getShowPolynomial() const;
    void addition(vector <Monomial>& pelements);
    void addition(const Polynomial& ppol); //+=
    static Polynomial addition(const Polynomial& p1, const Polynomial& p2);

    void operator +=(const Polynomial& pol);

    Polynomial operator +(const Polynomial& pol);
};

ostream& operator << (ostream&, Polynomial&);

#endif // POLYNOMIAL_H
