#include "error.h"
error::error(const std::string& m_error) : std::domain_error{ m_error.c_str() }{
}

