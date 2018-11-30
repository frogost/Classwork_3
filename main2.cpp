#include <iostream>

class material {
    std::string name;
    float density;

public:
    material (const std::string &_name, float _density){
        name=_name;
        density=_density;
    }
};


class material3d : public material {
    int state;
public:
    material3d(const std::string &_name, float _density, int _state):
        material (_name, _density), state (_state){
        }
};

int main() {
    
    std::string name = "Carbon";
    material3d carbon(name,1,0);
    return 0;
}