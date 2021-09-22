#include<iostream>
using namespace std;
class ComplexNumbers {
    private:
    int real;
    int imaginary;
    public:
    ComplexNumbers(int const &real ,int const &imaginary) {
        this->real=real;
        this->imaginary=imaginary;
    }
    void plus(ComplexNumbers const c2) {
        this->real=this->real + c2.real;
        this->imaginary=this->imaginary + c2.imaginary;
    }
    void multiply(ComplexNumbers const c2) {
        int temp=this->real;
        this->real= (this->real * c2.real) - (this->imaginary * c2.imaginary);
        this->imaginary= (temp * c2.imaginary) + (this->imaginary * c2.real);
    }
    void print() {
        if(this->imaginary >0) {
        cout<< this->real<<" "<<"+"<<" "<<"i"<<this->imaginary;  
    } else { 
         this->imaginary =this->imaginary * -1;
         cout<< this->real<<" "<<"-"<<" "<<"i"<<this->imaginary;
    }
    }   
};
int main() {
    int real1, imaginary1, real2, imaginary2;
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    int choice;
    cin >> choice;
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }   
}
