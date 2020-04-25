#ifndef CREATIVEXX_LOG_H
#define CREATIVEXX_LOG_H

#include <memory>

#include "Logger.h"

namespace creative::log {

    class Log {

    public:
        Log() = default;

        Log(const Log &) = delete;

        Log(const Log &&) = delete;

        Log &operator=(const Log &) = delete;

        Log &operator=(const Log &&) = delete;

        ~Log() = default;

        static std::shared_ptr<Logger> &get_creative_logger();

        static std::shared_ptr<Logger> &get_masterpiece_logger();

    private:

        static std::shared_ptr<Logger> s_creative_logger;

        static std::shared_ptr<Logger> s_masterpiece_logger;

    };

}

#define CREATIVE_TRACE(...) creative::log::Log::get_creative_logger()->trace(__VA_ARGS__);
#define CREATIVE_INFO(...)  creative::log::Log::get_creative_logger()->info(__VA_ARGS__);
#define CREATIVE_WARN(...)  creative::log::Log::get_creative_logger()->warn(__VA_ARGS__);
#define CREATIVE_ERROR(...) creative::log::Log::get_creative_logger()->error(__VA_ARGS__);
#define CREATIVE_FATAL(...) creative::log::Log::get_creative_logger()->fatal(__VA_ARGS__);

#define LOG_TRACE(...) creative::log::Log::get_masterpiece_logger()->trace(__VA_ARGS__);
#define LOG_INFO(...)  creative::log::Log::get_masterpiece_logger()->info(__VA_ARGS__);
#define LOG_WARN(...)  creative::log::Log::get_masterpiece_logger()->warn(__VA_ARGS__);
#define LOG_ERROR(...) creative::log::Log::get_masterpiece_logger()->error(__VA_ARGS__);
#define LOG_FATAL(...) creative::log::Log::get_masterpiece_logger()->fatal(__VA_ARGS__);

#endif //CREATIVEXX_LOG_H
