#include "../headers/complex.hpp"

complex::complex(double p_real, double p_imag = 0)
:real(p_real), imag(p_imag){}

double complex::realVal(complex c){
    return c.real;
}

double complex::imagVal(complex c){
    return c.imag;
}

complex complex::conj(complex c){
    return complex(c.real, -c.imag);
}

double complex::norm(complex c){
    return sqrt(pow(c.real, 2) + pow(c.imag, 2));
}

double complex::arg(complex c){
    return atan2(c.imag, c.real);
}

complex complex::polar(double mag, double angle){
    double real_part, imag_part;
    real_part = mag * cos(angle);
    imag_part = mag * sin(angle);
    return complex(real_part, imag_part);    
}

complex complex::operator+(const complex c){
    double real_part, imag_part;
    real_part = this->real + c.real;
    imag_part = this->imag + c.imag;
    return complex(real_part, imag_part);
}

complex operator+(double r, complex c) {
    return complex(r + c.real, c.imag);
}

complex operator+(complex c, double r) {
    return complex(r + c.real, c.imag);
}

complex complex::operator-(complex c){
    return complex(this->real - c.real, this->imag - c.imag);
}

complex operator-(double r, complex c) {
    return complex(r - c.real, c.imag);
}

complex operator-(complex c, double r) {
    return complex(c.real - r, c.imag);
}

complex complex::operator*(complex c) {
    return complex(this->real * c.real, this->imag * c.imag);
}

complex operator*(complex c, double r) {
    return complex(c.real * r, c.imag);
}

complex operator*(double r, complex c) {
    return complex(c.real * r, c.imag);
}

complex complex::operator/(complex c) {
    return complex(this->real / c.real, this->imag / c.imag);
}

complex operator/(complex c, double r) {
    return complex(c.real / r, c.imag);
}

complex operator/(double r, complex c) {
    return complex(r / c.real, c.imag);
}

int complex::operator==(complex c) {
    return (this->real == c.real) && (this->imag == c.imag)? 1 : 0;
}

int complex::operator!=(complex c) {
    return (this->real != c.real) || (this->imag != c.imag)? 1 : 0;
}

complex complex::operator-() {
    return complex(-this->real, -this->imag);
}

ostream& operator<<(ostream& ou, complex& c) {
    ou<<"("<<complex::realVal(c)<<", "<<complex::imagVal(c)<<")"<<endl;
    return ou;
}

istream& operator>>(istream& in, complex& c) {
    double real_part, image_part;
    char plus, i;
    cout<<"Enter a complex type in this format (5 + 4i): ";
    do
    {
        if(!(in>>real_part>>plus>>image_part>>i) || plus != '+' || i != 'i'){
            cout<<"format mismatch"<<endl;
        } else {
            c = complex(real_part, image_part);
            break;
        }
    } while (true);
    return in;
}