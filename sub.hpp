#pragma once
#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub : public Base {
private:
    double _value;
    double _lop;
    double _rop;
public:
    Sub(Base* lop, Base* rop) : _value(lop->evaluate()-rop->evaluate()) // not sure, may have to fix
    {
        this->_lop = lop->evaluate();
        this->_rop = rop->evaluate();
    };
    virtual double evaluate() { return this->_value; };
    virtual std::string stringify() {
        std::string string1 = std::to_string(_lop);
        std::string string2 = std::to_string(_rop);
	for (int i =0; i<7; i++){
                if (string1.at(string1.size()-1) == '0' || string1.at(string1.size()-1) == '.'){
                        string1.erase(string1.end()-1);
                }
                if (string1.at(string1.size()-1) != '0' && string1.at(string1.size()-1) != '.'){
                        break;
                }
        }
        for (int i =0; i<7; i++){
                if (string2.at(string2.size()-1) == '0' || string2.at(string2.size()-1) == '.'){
                        string2.erase(string2.end()-1);
                }

                if (string2.at(string2.size()-1) != '0' && string2.at(string2.size()-1) != '.'){
                        break;
                }
        }

        std::string string3 = "(" + string1 + "-" + string2 + ")";
        return string3;
    };
};

#endif //__SUB_HPP__

