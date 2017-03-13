//
// Created by jeanpolalvarado on 16/02/17.
//

#include "Polynomial.h"
#include <algorithm>

Polynomial::Polynomial(vector<Monomial> &pelements) {
    elements=pelements;
    addition(elements);
    cantElements=elements.size();

    for (const Monomial& monomial:elements){
        showPolynomial+= monomial.getView()+" ";
    }
}


Polynomial::Polynomial(const Polynomial &polynomialSource) {
    elements = polynomialSource.elements;
    cantElements=polynomialSource.cantElements;
    showPolynomial=polynomialSource.showPolynomial;
}

Polynomial::~Polynomial() {
    elements.clear();
    showPolynomial.clear();

}

const string &Polynomial::getShowPolynomial() const {
    return showPolynomial;
}

void Polynomial::addition(vector<Monomial> &pelements) {
    if (!pelements.empty()){  // vector no esta vacio
        sort(pelements.begin(),pelements.end()); // ordena el vector de Monomios segun el grado de las X
        int currentRank=pelements.front().getX(); // grado más grande, front() devuelve el primer elmento del vector
        int ayuda=0;
        vector<Monomial> resultante;
        for (unsigned int i=0; i<pelements.size();i++){
            if(i==pelements.size()){
                break;
            }
            int bandera=1+i;
            flag=pelements[i];
            while(bandera<pelements.size()){
                if (flag.getX()==pelements[bandera].getX()
                    && flag.getY()==pelements[bandera].getY()){
                    cout<<"cumple la condicion2"<<endl;
                    cout<<flag<<endl;
                    cout<<pelements[bandera]<<endl;
                    flag=flag+pelements[bandera];
                    pelements.erase(pelements.begin()+bandera);
                }
                bandera++;
            }
            if (flag.getCoef()!=0){
                resultante.push_back(flag);
               //pelements.erase(pelements.begin()+i);
            }
        }
        pelements=resultante;
    }}

void Polynomial::addition(const Polynomial &ppol) {
    elements.insert(elements.end(), ppol.elements.begin(),ppol.elements.end());
    addition(elements);
    cantElements=elements.size();
    showPolynomial.clear();
    for(const Monomial& monomial:elements){
        showPolynomial+=monomial.getView()+ "  +";
    }

}

Polynomial Polynomial::addition(const Polynomial &p1, const Polynomial &p2) {
    vector<Monomial> resultante= p1.elements;
    resultante.insert(resultante.end(),p2.elements.begin(),p2.elements.end());
    return Polynomial(resultante);

}

void Polynomial::operator+=(const Polynomial &pol) {
    addition(pol);
}

Polynomial Polynomial::operator+(const Polynomial &pol) {
    return addition(*this,pol);
}

ostream& operator << (ostream& out, Polynomial& polinomio){
    out<<polinomio.getShowPolynomial()<<endl;
    return out;
}
