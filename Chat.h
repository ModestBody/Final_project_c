#ifndef CHAT_H
#define CHAT_H

#include "User.h"
#include <map>
#include <string>
using namespace std;

class Chat {
public:
    void RegisterUser(const string& login, const string& password, const string& name);
    bool LoginUser(const string& login, const string& password);
    void SendMessageToUser(const string& senderLogin, const string& receiverLogin, const string& message);
    void BroadcastMessage(const string& senderLogin, const string& message);

private:
   map<string, User> users_;
};

#endif // CHAT_H

