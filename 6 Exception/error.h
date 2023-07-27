#pragma once
#include <stdexcept>
#include <exception>
class error : public std::domain_error
{
public:
    error(const std::string& m_error);
};

