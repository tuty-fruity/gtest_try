#pragma once
#include <string>

class IDataBase
{
public:
    virtual ~IDataBase() {}
    virtual bool connect(const std::string& hostname) = 0;
};
