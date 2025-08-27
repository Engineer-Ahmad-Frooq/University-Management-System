#include<iostream>
using namespace std;
class User{
    private:
        string name,e_mail;
        int password;
    public:
       string setName(string Name){
            name = Name;
        }   
       string setMail(string Mail){
            e_mail = Mail;
        }  
       int setpsw(int psw){
            password = psw;
        }
       string getName(){
        return name;
       }  
        string getMail(){
        return e_mail;
       }  
        int getpsw(){
        return password;
       }  
};
class Admin:public User{
    public:
        int r;
        int adminRoll(int r){system("cls");
            cout<<"---------- ADMINISTRATION ----------"<<endl<<endl;
            cout<<"1. Create and manage Instructor and Student accounts."<<endl;
            cout<<"2. Create new courses."<<endl;
            cout<<"3. Assign instructors to courses."<<endl;
            cout<<"4. Enroll students in courses."<<endl;
            cout<<"5. View reports"<<endl;
            cout<<"Enter your choice: "<<endl;
            cin>>r;
            if(r==1){

            }
            else if(r==2){

            }
            else if(r==3){
                
            }
            else if(r==4){
                
            }
            else if(r==5){
                
            }
            else{
                cout<<"Invalid Value!"<<endl;
            }
        }
      
};
class Instructor:public User{
    public:
    int rol;
    int instructRole(int rol){system("cls");
        cout<<"---------- INSTRUCTOR ----------"<<endl<<endl;
        cout<<"1. View all courses in the system."<<endl;
        cout<<"2. View rosters of their assigned courses."<<endl;
        cout<<"3. Assign grades to students enrolled in their courses."<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>rol;
        if(rol==1){

        }
        else if(rol==2){

        }
        else if(rol=3){

        }
        else{
            cout<<"Invalid Value!"<<endl;
        }
    }
};
class Student:public User{
    public:
    int ro;
    int studentRole(int ro){system("cls");
        cout<<"---------- STUDENT ----------"<<endl<<endl;
        cout<<"1. Enroll in Courses."<<endl;
        cout<<"2. View their transcript, including courses, grades, and GPA."<<endl;
        cout<<"3. View a list of all courses to know available options."<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>ro;
        if(ro==1){

        }
        else if(ro==2){

        }
        else if(ro=3){

        }
        else{
            cout<<"Invalid Value!"<<endl;
        }
    }
};
int main(){
    system("cls");
    cout<<"---------- UNIVERSITY MANAGAGEMENT SYSTEM ------------"<<endl<<endl;
    cout<<"Login into your account!"<<endl;
    string name,e_mail;
    int password;
    cout<<" Enter your Name: "<<endl;
    cin>>name;
    cout<<"Enter your e-mail: "<<endl;
    cin>>e_mail;
    cout<<"Enter password: "<<endl;
    cin>>password;
    system("cls");
    cout<<"LOGIN as:"<<endl;
    int a;
    cout<<"1 Administrator"<<endl;
    cout<<"2 Instuctor "<<endl;
    cout<<"3 Student "<<endl;
    cout<<"Enter your choice: "<<endl;
    cin>>a;
    User user;
    Admin admin;
    Instructor instructor;
    Student student;

    int r,ro,rol;
    if(a==1){
        cout<<name<<", You are an Admin"<<endl;
        admin.adminRoll(r);
    }
    else if(a==2){
        cout<<name<<", You are an Instructor"<<endl;
        instructor.instructRole(rol);
    }
    else if(a==3){
        cout<<name<<", You are a Student"<<endl;
        student.studentRole(ro);
    }else{
        cout<<"Invalid Input!"<<endl;
    }
    return 0;
}