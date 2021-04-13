#pragma once
#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <cmath> // for pow

class Pow : public Base {
private:
    double _value;
    double _lop;
    double _rop;
public:
    
    Pow(double lop, double rop) : _value(std::pow(lop, rop))
    {
        this->_lop = lop;
        this->_rop = rop;
    };
    virtual double evaluate() { return this->_value; };
    virtual std::string stringify() {
        std::string valuetostring1 = std::to_string(_lop);
        std::string valuetostring2 = std::to_string(_rop);
        std::string valuetostring3 = "(" + valuetostring1 + "**" + valuetostring2 + ")";
        return valuetostring3;
    };
};

#endif //__POW_HPP__
