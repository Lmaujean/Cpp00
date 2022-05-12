#include <iostream>
#include <string>

using namespace std;

class Contact {
    private:
        string _name;
        string _name2;
    public:
        Contact(){}
        void add() {
            cout << "Enter Name : ";
            cin >> _name;
            cout << "Enter Two Name : ";
            cin >> _name2;
        }
        string getName() {
            return _name;
        }
        string getName2() {
            return _name2;
        }
};

class PhoneBook {
  public:
    PhoneBook() {};
    void add() {
        contact.add();
    }
    void printName() {
        cout << contact.getName() << " " << contact.getName2() << endl;
    }
  private:
    Contact contact;  
};

int main() {
    PhoneBook phonebook;

    phonebook.add();
    phonebook.printName();
    return (0);
}