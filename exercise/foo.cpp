#include "foo.hpp"

Foo::Foo(const std::string name)
{
    this->name = name;
}

Foo::~Foo()
{
}

std::string Foo::getName() const
{
    return this->name;
}
