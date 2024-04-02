// Chat.h
#ifndef CHAT_H
#define CHAT_H

#include "User.h" 
#include <map>
#include <string>
#include <vector>
using namespace std;

class Chat
{
public:
    void RegisterUser(const string& username, const string& password, const string& name);
    bool LoginUser(const string& username, const string& password);
    void BroadcastMessage(const string& sender, const string& message);
    void DisplayChat();

private:
    map<string, User> users_;
    vector<pair<string, string>> messages;
};

#endif // CHAT_H


