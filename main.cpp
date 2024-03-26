#include "Chat.h"

int main() {
    Chat chat;

    chat.RegisterUser("user1", "pass1", "Bogdan");
    chat.RegisterUser("user2", "pass2", "Maksim");

    chat.LoginUser("user1", "pass1");

    chat.SendMessageToUser("user1", "user2", "Hello, how are you?");
    chat.BroadcastMessage("user1", "Hello all!");

    return 0;
}
