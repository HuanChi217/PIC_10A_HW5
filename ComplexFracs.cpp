#include "ComplexFracs.hpp"

void ComplexFrac::print() const {
    if (!real.isZero()) {
        real.print();
        if (imag.isPositive()) { std::cout << "+"; }
    }
    if (!imag.isZero()) { imag.print();  std::cout << "*i"; }
    if ( real.isZero() && imag.isZero() ) { std::cout << 0; }
}

ComplexFrac ComplexFrac::add(const ComplexFrac& other) const {
    return ComplexFrac(real.add(other.real), imag.add(other.imag));
}

ComplexFrac ComplexFrac::subtract(const ComplexFrac& other) const
{
    return ComplexFrac(real.subtract(other.real), imag.subtract(other.imag));
}

ComplexFrac ComplexFrac::multiply(const ComplexFrac& other) const
{
    return ComplexFrac(real.multiply(other.real).subtract(imag.multiply(other.imag))
        , real.multiply(other.imag).add(imag.multiply(other.real)));
}

ComplexFrac ComplexFrac::divide(const ComplexFrac& other) const
{
    ComplexFrac complexFrac(other.real.divide(other.real.multiply(other.real).add(other.imag.multiply(other.imag)))
        ,other.imag.multiply(-1).divide(other.real.multiply(other.real).add(other.imag.multiply(other.imag))));

    return ComplexFrac(real, imag).multiply(complexFrac);
}



