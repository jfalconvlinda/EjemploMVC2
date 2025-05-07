#ifndef A_H
#define A_H
#include <iostream>
using namespace std;
class A{
    int a;
public:
    A(int&);
    virtual string mostrar();
    int getA()const;
    void setA(int&);
};

#endif // A_H
