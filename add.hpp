fndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Op : public Base {
private:
    double _value;
    double _lop;
    double _rop;
public:
    Op(double lop, double rop) : _value(lop+rop) // may need to fix
    {
        this->_lop = lop;
        this->_rop = rop;
    };
    virtual double evaluate() { return this->_value; };
    virtual std::string stringify() {
        std::string valuetostring1 = std::to_string(_lop);
        std::string valuetostring2 = std::to_string(_rop);
        std::string valuetostring3 = "(" + valuetostring1 + "+" + valuetostring2 + ")";
        return valuetostring3;
    };
};

#endif //__ADD_HPP__
#pragma once

