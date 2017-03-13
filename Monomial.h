//
// Created by jeanpolalvarado on 16/02/17.
//

#ifndef MONOMIAL_H
#define MONOMIAL_H

#include <ostream>
#include "stdio.h"
#include "To_String.h"
using namespace std;

class Monomial {
private:
    int x;
public:
    void setX(int x);

    void setY(int y);

    void setCoef(int coef);

private:
    int y;
    int coef;
    string view;

public:
    int getCoef() const;
    int getX() const;
    int getY() const;
    const string &getView() const;
    void setView();
    Monomial(int pcoef, int px, int py);

    Monomial();


};

ostream& operator << (ostream&, Monomial&);
bool  operator < (const Monomial&, const Monomial&);
bool operator ==  (const Monomial&, const Monomial&);
Monomial  operator +  (const Monomial&, const Monomial&);


#endif // MONOMIAL_H
