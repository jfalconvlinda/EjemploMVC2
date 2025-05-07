#ifndef B_H
#define B_H
#include <headers/A.h>
class B:public A{
    int b;
public:
    B(int&,int&);
    string mostrar()override;
    int getB()const;
    void setB(int&);
};

#endif // B_H
