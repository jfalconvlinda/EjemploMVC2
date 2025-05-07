#include <headers/B.h>
B::B(int&a_,int&b_):A(a_),b(b_){}
string B::mostrar(){
    return A::mostrar()+";y El valor de b es:"+to_string(b);
}
int B::getB()const{
    return b;
}
void B::setB(int&b_){
    b=b_;
}
