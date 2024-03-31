# Final_project_c++
Проект выполняют Макасеевы Богдан и Максим.
Описание идеи решения: Проект представляет собой консольное приложение для чата, которое позволяет пользователям регистрироваться, входить в систему и обмениваться сообщениями.
Описание Пользовательских Типов и Функций:
Класс User:
Конструктор: User(string login, string password, string name) - инициализирует объект пользователя с заданными логином, паролем и именем.
Метод CheckPassword: bool CheckPassword(conststring& password) - проверяет, соответствует ли предоставленный пароль сохраненному паролю пользователя.
Метод GetName: string GetName() const - возвращает имя пользователя.
Класс Chat:
Метод RegisterUser: void RegisterUser(const string& login, const string& password, const string& name) - регистрирует нового пользователя в чате.
Метод LoginUser: bool LoginUser(conststring& login, const string& password) - позволяет пользователю войти в чат, если логин и пароль верны.
Метод SendMessageToUser: void SendMessageToUser(const string& senderLogin, const string& receiverLogin, const string& message) - отправляет сообщение от одного пользователя другому.
Метод BroadcastMessage: void BroadcastMessage(const string& senderLogin, conststring& message) - отправляет сообщение всем пользователям чата, кроме отправителя.
Файл main.cpp:
Содержит точку входа в программу, где создается объект Chat, регистрируются пользователи и демонстрируется функциональность чата.
Распределение задач:
Макасеев Максим:
класс User.h и User.cpp. Также Максим написал README.md.
Макасеев Богдан:
класс Chat.h, Chat.cpp. и main.cpp. Также Богдан создал репозиторий.
Пользовательские типы:
User: Класс, представляющий пользователя чата. Содержит логин, пароль и имя пользователя.
Конструкторы:
User(): Конструктор по умолчанию, создает пустого пользователя.
User(conststring& login, const string& password, const string& name): Конструктор, который инициализирует пользователя с заданными логином, паролем и именем.
Методы:
bool VerifyPassword(const string& password) const: Проверяет, соответствует ли предоставленный пароль паролю пользователя.
string GetName() const: Возвращает имя пользователя.
Функции:
В классе Chat:
void RegisterUser(const string& username, const string& password, const string& name): Регистрирует нового пользователя с заданным логином, паролем и именем.
bool LoginUser(const string& username, const string& password): Проверяет, существует ли пользователь с заданным логином и паролем, и в случае успеха возвращает true.
void BroadcastMessage(const string& sender, const string& message): Отправляет сообщение от имени пользователя всем зарегистрированным пользователям.
void DisplayChat(): Выводит все сообщения чата в консоль.
Примечания:
Пароль для входа в систему задается при регистрации пользователя и в вашем случае для обоих пользователей он установлен как "1234".
Все взаимодействия с пользователем происходят через консоль, где пользователь может ввести свои данные и получить соответствующий ответ от программы.
