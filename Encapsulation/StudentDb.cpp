#include <iostream>
using namespace std;

class StudentDb{

    private:
    static int count;
    char *name;
    int rollNo;
    float marks[5];

    public:
    StudentDb(){
        count++;
    }

    ~StudentDb() {
        delete[] name;
    }

    void setData(){
        cout<<"Enter name:";
        name=new char[50];
        cin>>name;
        cout<<"Enter roll number:";
        cin>>rollNo;

        for(int i=0;i<5;i++){
            cout<<"Enter marks for subject "<<i+1<<":";
            cin>>marks[i];
        }
    }

    inline void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }

    static void showCount(){
        cout << "Total students: " << count << endl;
    }

    friend void calGrade(StudentDb s);

};

int StudentDb::count = 0;

  void calGrade(StudentDb s){
    float totalMarks=0;
    for(int i=0;i<5;i++){
        totalMarks+=s.marks[i];
    }

    float temp=totalMarks/5;

    switch((int)temp){
        case 90 ... 100:
            cout<<"Grade: A+"<<endl;
            break;

        case 80 ... 89:
            cout<<"Grade: A"<<endl;
            break;

        case 70 ... 79:
            cout<<"Grade: B+"<<endl;
            break;

        case 60 ... 69:
            cout<<"Grade: B"<<endl;
            break;

        case 50 ... 59:
            cout<<"Grade: C"<<endl;
            break;

        default:
            cout<<"Grade: F"<<endl;
    }
}

int main(){
    StudentDb s1;
    s1.setData();
    s1.display();
    calGrade(s1);
    StudentDb::showCount();
}