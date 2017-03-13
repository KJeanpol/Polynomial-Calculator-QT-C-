//
// Created by jeanpolalvarado on 16/02/17.
//

#include "Monomial.h"

int Monomial::getCoef() const {
    return coef;
}

int Monomial::getX() const {
    return x;
}

int Monomial::getY() const {
    return y;
}

const string &Monomial::getView() const {
    return view;
}

Monomial::Monomial(int pcoef, int px, int py) {
    coef=pcoef;
    x=px;
    y=py;
    setView();
}

void Monomial::setView() {
    view=convert_to_string(coef)+("x^")+ convert_to_string(x)+("y^")+
            convert_to_string(y);
}

void Monomial::setX(int x) {
    Monomial::x = x;
}

void Monomial::setY(int y) {
    Monomial::y = y;
}

void Monomial::setCoef(int coef) {
    Monomial::coef = coef;
}

Monomial::Monomial() {}


ostream& operator << (ostream& out, Monomial& monomio){
    out<<monomio.getView()<<endl;
    return  out;
}

bool  operator < (const Monomial& m1, const Monomial& m2){

    return m2.getX() < m1.getX();
}
bool operator ==  (const Monomial& m1, const Monomial& m2){
    return m2.getX() == m1.getX();
}

Monomial operator+(const Monomial& m1 , const Monomial& m2) {
    int finalcoef=m1.getCoef()+m2.getCoef();
    int finalx=m1.getX();
    int finaly=m1.getY();
    return Monomial(finalcoef,finalx,finaly);
}

