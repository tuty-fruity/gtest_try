#include <string>

class Foo
{
public:
    Foo(const std::string name);
    ~Foo();
    
    std::string getName() const;

private:
    std::string name;
};
