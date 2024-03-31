// #include "../headers/complex.hpp"
#include "./complex.cpp"
#include <iostream>
using namespace std;

int main(){
    complex c(3, 4);
    cout<<"real part: "<<complex::realVal(c)<<endl;
    cout<<"imaginary part: "<<complex::imagVal(c)<<endl;
    cout<<"conjugate of ("<<complex::realVal(c)<<", "<<complex::imagVal(c)<<")";
    complex conj_c = complex::conj(c);
    cout<<" is ("<<complex::realVal(conj_c)<<", "<<complex::imagVal(conj_c)<<")"<<endl;
    cout<<"its norm is : "<<complex::norm(c)<<endl;
    cout<<"its argument is : "<<complex::arg(c)<<endl;
    complex c1 = complex::polar(2, 0.5);
    cout<<"The complex whose magnitude is 2 and phase angle is 0.5 is ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = c + c;
    cout<<"sum = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = 5 + c;
    cout<<"sum = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = c + 10;
    cout<<"sum = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = c - c;
    cout<<"diff = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = 6 - c;
    cout<<"diff = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = c - 6;
    cout<<"diff = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = c * c;
    cout<<"mult = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = c * 4;
    cout<<"mult = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = 5 * c;
    cout<<"mult = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = c / c;
    cout<<"div = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = c / 3;
    cout<<"div = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    c1 = 1 / c;
    cout<<"div = ("<<complex::realVal(c1)<<", "<<complex::imagVal(c1)<<")"<<endl;
    if(c == c1)
        cout<<"yes there are equeal"<<endl;
    else
        cout<<"no not equeal"<<endl;
    if(c != c1)
        cout<<"yes there are different"<<endl;
    else
        cout<<"no not different"<<endl;
    complex neg = -c;
    cout<<"neg (3, 4) = ("<<complex::realVal(neg)<<", "<<complex::imagVal(neg)<<")"<<endl;
    cout<<neg;
    complex x;
    cin>>x;
    cout<<x;
    return 0;
}