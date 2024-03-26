#include "User.h"
using namespace std;

User::User() : login_(""), password_(""), name_("") {}

User::User(string login, string password, string name) : login_(login), password_(password), name_(name) {}

bool User::CheckPassword(const string& password) {
    return password == password_;
}

string User::GetName() const {
    return name_;
}
