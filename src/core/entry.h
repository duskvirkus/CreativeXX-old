#ifndef CREATIVEXX_ENTRY_H
#define CREATIVEXX_ENTRY_H

#include "init.h"

#ifndef CATCH_CONFIG_MAIN

extern creative::application::Application *create_application();

int main(int /*argc*/, char **/*argv*/) {
    creative::initialize();

    auto app = create_application();
    app->run();
    delete app;
    return 0;
}

#endif // CATCH_CONFIG_MAIN

#endif //CREATIVEXX_ENTRY_H
