#ifndef WORLDTHING_H
#define WORLDTHING_H

#include <string>

class WorldThing {
protected:
    std::string name;

public:
    WorldThing(const std::string& name) : name(name) {}
    virtual ~WorldThing() = default;

    std::string getName() const { return name; }
    void setName(const std::string& newName) { name = newName; }
};

#endif // WORLDTHING_H
