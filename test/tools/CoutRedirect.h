#ifndef CREATIVEXX_COUTREDIRECT_H
#define CREATIVEXX_COUTREDIRECT_H

#include <iostream>
#include <sstream>

namespace test::tools {
    class CoutRedirect {
    public:

        CoutRedirect();

        ~CoutRedirect();

        CoutRedirect(const CoutRedirect &) = delete;

        CoutRedirect(const CoutRedirect &&) = delete;

        CoutRedirect &operator=(const CoutRedirect &) = delete;

        CoutRedirect &operator=(const CoutRedirect &&) = delete;

        std::string str() const;

    private:

        std::basic_streambuf<char, std::char_traits<char>> *m_saved;

        std::stringstream m_redirect;

    };
}

#endif //CREATIVEXX_COUTREDIRECT_H
