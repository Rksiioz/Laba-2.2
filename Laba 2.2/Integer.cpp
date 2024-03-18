#include "Integer.h"

Integer::Integer()
{
    this->a = 0;
}

Integer::Integer(const Integer &from)
{
    this->a = from.a;
}

Integer::Integer(const int a)
{
    this->a = a;
}

Integer::~Integer()
{
}

Integer Integer::operator++(int num)
{
    Integer temp = *this;
    *this = *this + 1;
    return temp;
}

Integer operator-(Integer number)
{
    Integer res;
    res.a = -number.a;
    return res;
}

Integer operator+(Integer n1, Integer n2)
{
    Integer res;
    res.a = n1.a + n2.a;
    return res;
}

std::istream &operator>>(std::istream &in, Integer &number)
{
    in >> number.a;
    return in;
}

std::ostream &operator<<(std::ostream &os, const Integer &number)
{
    os << number.a;

    return os;
}