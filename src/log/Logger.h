#ifndef CREATIVEXX_LOGGER_H
#define CREATIVEXX_LOGGER_H

#include <iostream>
#include <string_view>
#include <string>

namespace creative::log {

    class Logger {
    public:

        enum Level {
            TRACE,
            INFO,
            WARN,
            ERROR,
            FATAL
        };

        Logger();

        explicit Logger(const std::string &name);

        explicit Logger(Level level);

        explicit Logger(std::string name, Level level);

        Logger(const Logger &) = delete;

        Logger(const Logger &&) = delete;

        Logger &operator=(const Logger &) = delete;

        Logger &operator=(const Logger &&) = delete;

        ~Logger() = default;

        void trace(const std::string_view &msg) const;

        void info(const std::string_view &msg) const;

        void warn(const std::string_view &msg) const;

        void error(const std::string_view &msg) const;

        void fatal(const std::string_view &msg) const;

        void print(Level level, const std::string_view &msg) const;

        void set_level(Level level);

    protected:

        const std::string m_name;
        Level m_level;

        static constexpr const char *level_c_str(Level level);

    private:

        static constexpr const char *c_str_trace = "TRACE";
        static constexpr const char *c_str_info = "INFO ";
        static constexpr const char *c_str_warn = "WARN ";
        static constexpr const char *c_str_error = "ERROR";
        static constexpr const char *c_str_fatal = "FATAL";
        static constexpr const char *c_str_unknown = "UNKNOWN";

    };

}

#endif //CREATIVEXX_LOGGER_H
