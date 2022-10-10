#ifndef ComplexFracs_hpp
#define ComplexFracs_hpp

#include "Fracs.hpp"

class ComplexFrac {
public:
    ComplexFrac() : real(0), imag(0) {}
    ComplexFrac(Frac _re) : real(_re), imag(0) {}
    ComplexFrac(Frac _re, Frac _im) : real(_re), imag(_im) {}
    ComplexFrac(int _re) : real(_re), imag(0) {}
    ComplexFrac(int _RNum, int _RDen, int _INum, int _IDen) : real(_RNum, _RDen), imag(_INum, _IDen){}
    
    void print() const;

    ComplexFrac add(const ComplexFrac& other) const;
    ComplexFrac subtract(const ComplexFrac& other) const;
    ComplexFrac multiply(const ComplexFrac& other) const;
    ComplexFrac divide(const ComplexFrac& other) const;

    bool isEqual(const ComplexFrac& other) const { return (real.isEqual(other.real)) && (imag.isEqual(other.imag)); }


private:
    Frac real;
    Frac imag;
};



#endif /* ComplexFracs_hpp */