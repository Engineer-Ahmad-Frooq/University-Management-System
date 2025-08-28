#include <iostream>
#include <vector>
using namespace std;

// Forward declaration
class University;
void enrollStudent(University &university); // Function prototype

// ================= User Class =================
class User {
private:
    string name, e_mail, departN;
    int password, rollN;

public:
    void setName(string Name) { name = Name; }
    string getName() { return name; }

    void setMail(string Mail) { e_mail = Mail; }
    string getMail() { return e_mail; }

    void setpsw(int psw) { password = psw; }
    int getpsw() { return password; }

    void setRoll(int Roll) { rollN = Roll; }
    int getRoll() { return rollN; }

    void setDepart(string department) { departN = department; }
    string getdepart() { return departN; }

    int CreateAccount() {
        int q;
        int instPSW, stdPSW;
        cout << "1. Create Instructor Account" << endl;
        cout << "2. Create Student Account" << endl;
        cout << "3. View All User" << endl;
        cout << "Enter your Choice: ";
        cin >> q;
        string instName, instMail, stdName, stdMail;

        if (q == 1) {
            cout << "Instructor's Name: ";
            cin >> instName;
            cout << "Instructor's Password: ";
            cin >> instPSW;
            cout << "Instructor's E-Mail: ";
            cin >> instMail;
        } else if (q == 2) {
            cout << "Student's Name: ";
            cin >> stdName;
            cout << "Student's Password: ";
            cin >> stdPSW;
            cout << "Student's E-Mail: ";
            cin >> stdMail;
        } else if (q == 3) {

        } else {
            cout << "Invalid Value." << endl;
        }
        return q;
    }

    void ViewCourses() {
        system("cls");
        cout << "--------- VIEW ALL COURSES ---------" << endl
             << endl;
        cout << "1. Introduction to Computer Science" << endl;
        cout << "2. Programming Fundamentals (C++, Python, or Java)" << endl;
        cout << "3. Object-Oriented Programming (OOP)" << endl;
        cout << "4. Data Structures & Algorithms (DSA)" << endl;
        cout << "5. Computer Organization & Architecture" << endl;
        cout << "6. Operating Systems" << endl;
        cout << "7. Database Management Systems (DBMS)" << endl;
        cout << "8. Software Engineering" << endl;
        cout << "9. Theory of Computation" << endl;
        cout << "10. Design & Analysis of Algorithms" << endl;
        cout << "11. Computer Networks" << endl;
        cout << "12. Compiler Design" << endl;
        cout << "13. Web Technologies / Web Development" << endl;
        cout << "14. Human-Computer Interaction (HCI)" << endl;
        cout << "15. Mobile Application Development" << endl;
        cout << "16. Artificial Intelligence (AI)" << endl;
        cout << "17. Machine Learning (ML)" << endl;
        cout << "18. Cybersecurity & Information Assurance" << endl;
        cout << "19. Cloud Computing" << endl;
        cout << "20. Final Year Project / Capstone Project" << endl;
    }
};

// ================= Student Class =================
class Student : public User {
public:
    int studentRole() {
        int ro;
        system("cls");
        cout << "---------- STUDENT ----------" << endl
             << endl;
        cout << "1. Enroll in Courses." << endl;
        cout << "2. View their transcript, including courses, grades, and GPA." << endl;
        cout << "3. View a list of all courses to know available options." << endl;
        cout << "Enter your choice: ";
        cin >> ro;

        if (ro == 1) {
            cout << "Enrollment feature coming soon!" << endl;
        } else if (ro == 2) {
            cout << "Transcript feature coming soon!" << endl;
        } else if (ro == 3) {
            ViewCourses();
        } else {
            cout << "Invalid Value!" << endl;
        }
        return ro;
    }
};

// ================= University Class =================
class University : public Student {
    vector<Student> v;

public:
    void addStudent(Student student) { v.push_back(student); }

    void displayStudent() {
        system("cls");
        if (v.empty()) {
            cout << "No Student Added." << endl;
        } else {
            for (int i = 0; i < v.size(); i++) {
                cout << "Student Name: " << v[i].getName() << endl;
                cout << "Roll Number: " << v[i].getRoll() << endl;
                cout << "Department Name: " << v[i].getdepart()
                     << "\n--------------------------------------" << endl;
            }
        }
    }

    void search(int rollN) {
        system("cls");
        bool found = false;
        for (int i = 0; i < v.size(); i++) {
            if (rollN == v[i].getRoll()) {
                cout << "Student Name: " << v[i].getName() << endl;
                cout << "Department Name: " << v[i].getdepart() << endl;
                cout << "Roll Number: " << v[i].getRoll() << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "No Student Found." << endl;
    }
};

// ================= Instructor Class =================
class Instructor : public User {
public:
    int instructRole() {
        int rol;
        system("cls");
        cout << "---------- INSTRUCTOR ----------" << endl
             << endl;
        cout << "1. View all courses in the system." << endl;
        cout << "2. View rosters of their assigned courses." << endl;
        cout << "3. Assign grades to students enrolled in their courses." << endl;
        cout << "Enter your choice: ";
        cin >> rol;

        if (rol == 1) {
            ViewCourses();
        } else if (rol == 2) {
            cout << "Roster feature coming soon!" << endl;
        } else if (rol == 3) {
            cout << "Grading feature coming soon!" << endl;
        } else {
            cout << "Invalid Value!" << endl;
        }
        return rol;
    }
};

// ================= Admin Class =================
class Admin : public User {
public:
    int adminRoll(University &university) {
        int r;
        system("cls");
        cout << "---------- ADMINISTRATION ----------" << endl
             << endl;
        cout << "1. Create and manage Instructor and Student accounts." << endl;
        cout << "2. Create new courses." << endl;
        cout << "3. Assign instructors to courses." << endl;
        cout << "4. Enroll/Add students in courses." << endl;
        cout << "5. View reports." << endl;
        cout << "Enter your choice: ";
        cin >> r;

        if (r == 1) {
            CreateAccount();
        } else if (r == 2) {
            cout << "Create new courses feature coming soon!" << endl;
        } else if (r == 3) {
            cout << "Assign instructors feature coming soon!" << endl;
        } else if (r == 4) {
            enrollStudent(university);
        } else if (r == 5) {
            university.displayStudent();
        } else {
            cout << "Invalid Value!" << endl;
        }
        return r;
    }
};

// ================= enrollStudent() Function =================
void enrollStudent(University &university) {
    Student student;
    cout << "Enter Student Information: ...." << endl
         << endl;
    int exit = 1;
    while (exit != 0) {
        string name, departN;
        int rollN;
        cout << "Enter Name: ";
        cin >> name;
        student.setName(name);

        cout << "Enter Roll Number: ";
        cin >> rollN;
        student.setRoll(rollN);

        cout << "Enter Department: ";
        cin >> departN;
        student.setDepart(departN);

        university.addStudent(student);
        cout << "Student Added" << endl
             << endl;
        cout << "Enter 1 to Add more Student OR 0 to exit: ";
        cin >> exit;
    }
}

// ================= Main Function =================
int main() {
    system("cls");
    cout << "---------- UNIVERSITY COURSE MANAGEMENT SYSTEM ------------" << endl
         << endl;
    cout << "Login into your account!" << endl;
    cout << "LOGIN as:" << endl;
    cout << "1 Administrator" << endl;
    cout << "2 Instructor " << endl;
    cout << "3 Student " << endl;
    cout << "Enter your choice: ";
    int a;
    cin >> a;

    string name, e_mail;
    int password;
    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter your e-mail: ";
    cin >> e_mail;
    cout << "Enter password: ";
    cin >> password;
    system("cls");

    Admin admin;
    Instructor instructor;
    Student student;
    University university;

    if (a == 1) {
        cout << name << ", You are an Admin" << endl;
        admin.adminRoll(university);
    } else if (a == 2) {
        cout << name << ", You are an Instructor" << endl;
        instructor.instructRole();
    } else if (a == 3) {
        cout << name << ", You are a Student" << endl;
        student.studentRole();
    } else {
        cout << "Invalid Input!" << endl;
    }
    return 0;
}

