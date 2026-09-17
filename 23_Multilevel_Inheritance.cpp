#include <iostream>
using namespace std;

//grand-parent class
class User {
protected:
    string name;
    string email;

public:
    User(string n, string e) {
        name = n;
        email = e;
    }

    void showUserDetails() {
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
    }
};

//parent class
class PaidUser : public User {
protected:
    string subscriptionId;

public:
    PaidUser(string n, string e, string subId): User(n, e) {
        subscriptionId = subId;
    }

    void showSubscription() {
        cout << "Subscription ID: " << subscriptionId << endl;
    }
};

//child class
class PremiumUser : public PaidUser {
private:
    int premiumCoins;

public:
    PremiumUser(string n, string e, string subId, int coins): PaidUser(n, e, subId) {
        premiumCoins = coins;
    }

    void showPremiumDetails() {
        showUserDetails();
        showSubscription();
        cout << "Premium Coins: " << premiumCoins << endl;
    }
};

int main() {
    PremiumUser user("Rahul", "rahul@example.com", "SUB123", 500);
    user.showPremiumDetails();
}
