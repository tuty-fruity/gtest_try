#include "IDataBase.hpp"

class DataBase : public IDataBase
{
public:
    DataBase();
    ~DataBase();
    bool connect(const std::string& hostname);
};
