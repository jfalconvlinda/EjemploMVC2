#include <headers/A.h>
A::A(int&a_):a(a_){}
string A::mostrar(){
    return "El valor de a es:"+to_string(a);
}
int A::getA()const{
    return a;
}
void A::setA(int&a_){
    a=a_;
}
