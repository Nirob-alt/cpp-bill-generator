#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name,id;
    char section;
    int age,semester;
    float height;

    cout << "Name\t: ";
    getline(cin, name);
    cout << "Age\t: ";
    cin >> age;
    cout << "Height\t: ";
    cin >> height;
    cout << "Semester\t: ";
    cin >> semester;
    cout << "Section\t: ";
    cin >> section;
    cout << "ID\t: ";
    cin >> id;

    cout << "+-------------------------------+\n";
    cout << "|               AUST            |\n";
    cout << "|   STUDENT REGISTRATION CARD   |\n";
    cout << "+-------------------------------+\n";
    cout << "Name\t\t: " << name << "\n";
    cout << "Age\t\t: " << age << "\n";
    cout << "Height\t\t: " << height << "\n";
    cout << "Semester\t: " << semester << "\n";
    cout << "Section\t\t: " << section << "\n";
    cout << "Student ID\t: " << id << "\n";
}
