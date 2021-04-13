#pragma once
#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
private: 
    double _value;
public:
    Op(double value) : _value(value) { }; // not sure, may have to fix
    virtual double evaluate() { return this->_value; };
    virtual std::string stringify() { 
        std::string valuetostring = std::to_string(_value);
        return valuetostring; };
};

#endif //__OP_HPP__

























      
    

























   
