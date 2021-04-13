fndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"

class Op : public Base {
private: 
    double _value;
public:
    Op() { this->_value = rand() % 100; }; // may have to fix
    virtual double evaluate() { return this->_value; };
    virtual std::string stringify() {
        std::string valuetostring = std::to_string(_value);
        return valuetostring;
    };
};

#endif //__RAND_HPP__

