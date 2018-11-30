#include <iostream>

class base {
public:
    virtual int foo() {
        std::cout << "Hello! it's bases foo()!\n";

    }
};

class A : public base {
public:
    virtual int foo() {
        std::cout << "Hello! it's foo()!\n";
        return 0;
    }
};

class B : public A {
public:
    int foo() {
        std::cout << "foo for B\n";
        return 4;
    }
};

class core {

    A *a;
public:
    A *getA() const {
        return a;
    }

    core(A *_a) : a(_a) {}

    ~core() { delete a; }

    void Initialisation() {
        a->foo();
    }
};

int main() {
    core CORE(new B);
    CORE.Initialisation();
    CORE.getA()->A::foo();
    return 0;
}
