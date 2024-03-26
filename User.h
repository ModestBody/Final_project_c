#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
public:
    User();
    User(string login, string password, string name);
    bool CheckPassword(const string& password);
    string GetName() const;

private:
    string login_;
    string password_;
    string name_;
};

#endif // USER_H

