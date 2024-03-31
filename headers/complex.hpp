#pragma once
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class complex 
{
        double imag, real;
    public:
        complex(){
            imag = 0; 
            real = 0;
        }
        // Constructor to initialize real and imaginary parts of the complex number
        complex(double, double);

        // Return the real part of the complex number
        static double realVal(complex);

        // Return the imaginary part of the complex number
        static double imagVal(complex);

        // // Return the complex conjugate of a given complex number
        static complex conj(complex);

        // // Return the square of the magnitude of a given complex number
        static double norm(complex);

        // // Return the angle in radians of a given complex number
        static double arg(complex);

        // // Create a complex number from polar coordinates (magnitude and angle)
        static complex polar(double mag, double angle = 0);

        // // Overloaded addition operator to add two complex numbers
        complex operator+(complex);

        // // Friend function to add a double to a complex number
        friend complex operator+(double, complex);

        // // Friend function to add a complex number to a double
        friend complex operator+(complex, double);

        // // Overloaded subtraction operator to subtract two complex numbers
        complex operator-(complex);

        // // Friend function to subtract a complex number from a double
        friend complex operator-(double, complex);

        // // Friend function to subtract a double from a complex number
        friend complex operator-(complex, double);

        // // Overloaded multiplication operator to multiply two complex numbers
        complex operator*(complex);

        // // Friend function to multiply a complex number by a double
        friend complex operator*(complex, double);

        // // Friend function to multiply a double by a complex number
        friend complex operator*(double, complex);

        // // Overloaded division operator to divide two complex numbers
        complex operator/(complex);

        // // Friend function to divide a complex number by a double
        friend complex operator/(complex, double);

        // // Friend function to divide a double by a complex number
        friend complex operator/(double, complex);

        // // Overloaded equality operator to check if two complex numbers are equal
        int operator==(complex);

        // // Overloaded inequality operator to check if two complex numbers are not equal
        int operator!=(complex);

        // // Overloaded negation operator to get the opposite of the complex number
        complex operator-();
};

ostream& operator<<(ostream&, complex&);
istream& operator>>(istream&, complex&);