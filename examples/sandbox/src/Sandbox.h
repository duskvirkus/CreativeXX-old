#ifndef CREATIVEXX_SANDBOX_H
#define CREATIVEXX_SANDBOX_H

#include <CreativeXX.h>

class Sandbox : public creative::application::Application {
public:
    void setup() override;
    void update() override;
    void draw() override;
};

#endif //CREATIVEXX_SANDBOX_H
