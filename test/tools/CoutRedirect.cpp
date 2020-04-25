#include "CoutRedirect.h"

namespace test::tools {

    CoutRedirect::CoutRedirect() {
        m_saved = std::cout.rdbuf();
        std::cout.rdbuf(m_redirect.rdbuf());
    }

    CoutRedirect::~CoutRedirect() {
        std::cout.rdbuf(m_saved);
    }

    std::string CoutRedirect::str() const {
        return m_redirect.str();
    }

}
