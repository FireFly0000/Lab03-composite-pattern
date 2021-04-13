#pragma once
#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
private:
    double _value;
    double _lop;
    double _rop;
public:
    Div(Base* lop, Base* rop) : _value(lop->evaluate()/rop->evaluate()) // not sure, may have to fix
    {
        this->_lop = lop->evaluate();
        this->_rop = rop->evaluate();
    };
    virtual double evaluate() { return this->_value; };
    virtual std::string stringify() {
        std::string valuetostring1 = std::to_string(_lop);
        std::string valuetostring2 = std::to_string(_rop);
        std::string valuetostring3 = "(" + valuetostring1 + "/" + valuetostring2 + ")";
        return valuetostring3;
    };
};

#endif //__DIV_HPP__


