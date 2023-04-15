#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;
class Person // An Abstract Class
{
protected:
    string Name;
    string Id;
    string user_name;
    string password;
    string phone_number;
    string email;

public:
    virtual void create_Acc() = 0;
    virtual void login_Acc() = 0;
};
class Admin : protected Person
{
    double salary;
    int working_hours;

public:
    void create_Acc();
    void login_Acc();
    friend class player;
};
void Admin::create_Acc()
{

unique:

    cout << "Creating Account\nCreate the User_Name: ";
    cin >> this->user_name;

    ifstream fin;
    Admin *temp = new Admin;
    fin.open("Admin.dat", ios::app | ios::binary);
    while (!fin.eof())
    {
        fin.read((char *)temp, sizeof(*temp));
        if (this->user_name == temp->user_name)
        {
            cout << "User Already Exsist: " << endl;
            cout << "Select another user_id" << endl;
            goto unique;
        }
    }

    cout << "Set the Password: ";
    cin >> this->password;
    fin.close();
    ofstream fout;
    fout.open("Admin.dat", ios::app | ios::binary);
    fout.write((char *)this, sizeof(*this));
    fout.close();
}
void Admin::login_Acc()
{
    Admin *p1 = new Admin;
    cout << "Login Account\nEnter User_Name: ";
    cin >> p1->user_name;
    cout << "Enter Password: ";
    cin >> p1->password;
    bool valid = false;
    ifstream fin;
    fin.open("Admin.dat", ios::app | ios::binary);
    while (!fin.eof())
    {
        fin.read((char *)this, sizeof(*this));
        if ((this->user_name == p1->user_name) && (this->password == p1->password))
        {
            cout << "Account Succesfully Logged in" << endl;
            valid = true;
            break;
        }
    }
    if (valid == false)
    {
        cout << "Invalid Id and Password" << endl;
    }
}
class player
{
protected:
    long int score;
    long int streamed_hours;

public: 
};

int main()
{
}
