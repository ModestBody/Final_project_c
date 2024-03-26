#include "Chat.h"
#include <iostream>
using namespace std;

void Chat::RegisterUser(const string& login, const string& password, const string& name) {
    users_[login] = User(login, password, name);
}

bool Chat::LoginUser(const string& login, const string& password) {
    try {
        if (users_.at(login).CheckPassword(password)) {
            cout << "User " << users_.at(login).GetName() << " get in to chat.\n";
            return true;
        }
        return false;
    }
    catch (const out_of_range&) {
        cout << "The user was not found\n";
        return false;
    }
}

void Chat::SendMessageToUser(const string& senderLogin, const string& receiverLogin, const string& message) {
    try {
        cout << "Message from " << users_.at(senderLogin).GetName() << " for " << users_.at(receiverLogin).GetName() << ": " << message << "\n";
    }
    catch (const out_of_range&) {
        cout << "The user was not found\n";
    }
}

void Chat::BroadcastMessage(const string& senderLogin, const string& message) {
    for (const auto& user : users_) {
        if (user.first != senderLogin) {
            SendMessageToUser(senderLogin, user.first, message);
        }
    }
}