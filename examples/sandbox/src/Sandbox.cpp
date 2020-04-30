#include "Sandbox.h"

void Sandbox::setup() {
//    LOG_INFO("In Setup")
}

void Sandbox::update() {
//    LOG_INFO("In Update")
}

void Sandbox::draw() {
//    LOG_INFO("In Draw")
//    loop(false);
}

creative::application::Application *create_application() {
    return new Sandbox();
}
