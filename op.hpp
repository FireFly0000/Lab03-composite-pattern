#pragma once
#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

class Op : public Base {
private: 
    double _value;
public:
    Op(double value) : _value(value) { };
    virtual double evaluate() { return this->_value; };
    virtual std::string stringify() { 
        std::string valuetostring = std::to_string(_value);
	for (int i =0; i<7; i++){
		if (valuetostring.at(valuetostring.size()-1) == '0' || valuetostring.at(valuetostring.size()-1) == '.'){
			valuetostring.erase(valuetostring.end()-1);
		}
		if (valuetostring.at(valuetostring.size()-1) != '0' && valuetostring.at(valuetostring.size()-1) != '.'){
			break;
    		}
  	}	
        return valuetostring; };
};

#endif //__OP_HPP__


