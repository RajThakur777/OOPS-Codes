#include <iostream>
using namespace std;

class EmailSender {
public:
    void send() {
        cout << "Sending email" << endl;
    }
};

class SMSSender {
public:
    void send() {
        cout << "Sending SMS" << endl;
    }
};

class NotificationService : public EmailSender, public SMSSender {
};

int main() {
    NotificationService service;

    // service.send(); // Error: ambiguous

    service.EmailSender::send();
    service.SMSSender::send();
}
