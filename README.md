# Final_project_c++
Проект выполняют Макасеевы Богдан и Максим.
Описание идеи решения: Проект представляет собой консольное приложение для чата, которое позволяет пользователям регистрироваться, входить в систему и обмениваться сообщениями.
Описание Пользовательских Типов и Функций:
Класс User:
Конструктор: User(string login, std::string password, string name) - инициализирует объект пользователя с заданными логином, паролем и именем.
Метод CheckPassword: bool CheckPassword(conststring& password) - проверяет, соответствует ли предоставленный пароль сохраненному паролю пользователя.
Метод GetName: string GetName() const - возвращает имя пользователя.
Класс Chat:
Метод RegisterUser: void RegisterUser(const string& login, const string& password, const string& name) - регистрирует нового пользователя в чате.
Метод LoginUser: bool LoginUser(conststring& login, const string& password) - позволяет пользователю войти в чат, если логин и пароль верны.
Метод SendMessageToUser: void SendMessageToUser(const string& senderLogin, const string& receiverLogin, const string& message) - отправляет сообщение от одного пользователя другому.
Метод BroadcastMessage: void BroadcastMessage(const string& senderLogin, conststring& message) - отправляет сообщение всем пользователям чата, кроме отправителя.
Файл main.cpp:
Содержит точку входа в программу, где создается объект Chat, регистрируются пользователи и демонстрируется функциональность чата.
