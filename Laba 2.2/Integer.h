#pragma once
#include <iostream>

class Integer
{
private:
    int a;

public:
    Integer();
    Integer(const Integer &);
    Integer(const int a);
    virtual ~Integer();
    Integer operator++(int);
    friend Integer operator-(Integer);
    friend Integer operator+(Integer, Integer);
    friend std::ostream & operator<<(std::ostream &os, const Integer& p);
    friend std::istream& operator>>(std::istream& in, Integer& a);
};