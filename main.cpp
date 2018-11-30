#include <iostream>

class point {
    int x,y;
protected:
    bool flag;
public:
    point(int _x, int _y){
        x=_x;
        y=_y;

    }
    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }

};

class point3d : protected point{
    int z;
public:
    void foo(){
        getX();
    }
    point3d():point(1,1){
        z=0;
    }
    int getZ() const {
        return z;
    }

};

class pointnd : public point3d{
    int c;
public:
    void bar(){
        getX();
        flag;
    }
};

int main() {
    point3d a;
    a.flag=true;
    std::cout << a.getZ() << std::endl;
    return 0;
}