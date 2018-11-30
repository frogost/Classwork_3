#include <iostream>
class BaseA{
public:
    virtual float getA()=0;
};

class BaseB{
public:
    virtual float getB()=0;
};

class core{
    BaseA* a;
    BaseB* b;
public:
    core(BaseA*_a,BaseB*_b):a(_a),b(_b){}
    float calc(){
        return a->getA()+b->getB();
    };
};
int main() {
    core my_core(new A,new B);
    std::cout<<my_core.calc()<<'\n';
    return 0;
}