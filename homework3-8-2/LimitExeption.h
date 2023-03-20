#pragma once
#include <exception>

class LimitException : public std::exception
{
public:
    const char* name;
public:
    LimitException(const char* name);
    const char* what() const noexcept override { return name; }
};