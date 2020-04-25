#include "Log.h"

namespace creative::log {

    std::shared_ptr<Logger> &Log::get_creative_logger() {
        return s_creative_logger;
    }

    std::shared_ptr<Logger> &Log::get_masterpiece_logger() {
        return s_masterpiece_logger;
    }

    std::shared_ptr<Logger> Log::s_creative_logger = std::make_shared<Logger>("CR");

    std::shared_ptr<Logger> Log::s_masterpiece_logger = std::make_shared<Logger>("MP");

}
