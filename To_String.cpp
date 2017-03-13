//
// Created by jeanpolalvarado on 16/02/17.
//

#include "To_String.h"

string convert_to_string(double pnum) {
    ostringstream oss;
    oss << fixed;
    oss<< pnum;
    return oss.str();
}

string convert_to_string(int pnum) {
    ostringstream oss;
    oss << fixed;
    oss<< pnum;
    return oss.str();
}
