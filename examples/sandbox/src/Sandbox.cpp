#include "Sandbox.h"

void Sandbox::setup() {
    LOG_INFO("In Setup")
}

void Sandbox::update() {
    LOG_INFO("In Update")
}

void Sandbox::draw() {
    LOG_INFO("In Draw, mouse x: " + std::to_string(mouse_x()) + " y: " + std::to_string(mouse_y()))
}

void Sandbox::resize() {
    LOG_INFO("Window Resized")
}

void Sandbox::close() {
    LOG_INFO("Window Closed")
}

void Sandbox::key_down(unsigned int key_code, bool repeat) {
    LOG_INFO("Key down, code: " + std::to_string(key_code));
}

void Sandbox::key_up(unsigned int key_code) {
    LOG_INFO("Key up, code: " + std::to_string(key_code));
}

void Sandbox::mouse_down(int button) {
    LOG_INFO("Mouse down, button: " + std::to_string(button));
}

void Sandbox::mouse_up(int button) {
    LOG_INFO("Mouse up, button: " + std::to_string(button));
}

void Sandbox::mouse_moved() {
    LOG_INFO("Mouse Moved");
}

void Sandbox::mouse_scrolled(float x_off, float y_off) {
    LOG_INFO("Mouse Scrolled, x: " + std::to_string(x_off) + " y: " + std::to_string(y_off));
}

creative::application::Application *create_application() {
    return new Sandbox();
}
