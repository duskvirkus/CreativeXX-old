#include "Logger.h"

#include <utility>

namespace creative::log {

    Logger::Logger() :
            Logger(Level::TRACE) {}

    Logger::Logger(Level level) :
            Logger("--", level) {}

    Logger::Logger(const std::string &name) :
            Logger(name, Level::TRACE) {}

    Logger::Logger(std::string name, Logger::Level level) :
            m_name(std::move(name)),
            m_level(level) {}

    void Logger::trace(const std::string_view &msg) const {
        print(Level::TRACE, msg);
    }

    void Logger::info(const std::string_view &msg) const {
        print(Level::INFO, msg);
    }

    void Logger::warn(const std::string_view &msg) const {
        print(Level::WARN, msg);
    }

    void Logger::error(const std::string_view &msg) const {
        print(Level::ERROR, msg);
    }

    void Logger::fatal(const std::string_view &msg) const {
        print(Level::FATAL, msg);
    }

    void Logger::print(const Logger::Level level, const std::string_view &msg) const {
        if (level >= m_level) {
            std::cout
                    << '[' << m_name << '|' << level_c_str(level) << ']'
                    << ' '
                    << msg
                    << '\n';
        }
    }

    void Logger::set_level(Level level) {
        m_level = level;
    }

    constexpr const char *Logger::level_c_str(Logger::Level level) {
        switch (level) {
            case Logger::TRACE:
                return c_str_trace;
            case Logger::INFO:
                return c_str_info;
            case Logger::WARN:
                return c_str_warn;
            case Logger::ERROR:
                return c_str_error;
            case Logger::FATAL:
                return c_str_fatal;
        }
        return c_str_unknown;
    }

}
