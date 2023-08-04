#include <iostream>
using namespace std;

class Student {
    private:
        string name, age; int grade;
    public:
        Student() {}
        Student(string name, string age, int grade) {
            this->name = name;
            this->age = age; 
            this->grade = grade;
        }

        // getter
        string getName() { return name; }
        string getAge() { return age; }
        int getGrade() { return grade; }
};

int main()
{

    Student students[3];

    for(int i=0; i<3; i++) {
        string name, age; int grade;

        cout << "Name  : "; cin >> name;
        cout << "Age   : "; cin >> age;
        cout << "Grade : "; cin >> grade;

        Student s(name, age, grade);

        students[i] = s;
    }

    for(int i=0; i<3; i++) {
        cout << "Name  : " << students[i].getName() << endl;
        cout << "Age   : " << students[i].getAge() << endl;
        cout << "Grade : " << students[i].getGrade() << endl;
    }


    return 0;
}
