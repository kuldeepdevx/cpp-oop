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
        name=new char[20];
        count++;
    }

    ~StudentDb() {
        count--;
        delete[] name;
    }

    void setData(){
        cout<<"Enter name:";
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

    friend void calGrade(StudentDb& s);

};

int StudentDb::count = 0;

  void calGrade(StudentDb& s){
    float totalMarks=0;
    for(int i=0;i<5;i++){
        totalMarks+=s.marks[i];
    }

    float avg=totalMarks/5;

    if(avg>=90 && avg<=100){
        cout<<"Grade: A+"<<endl;
    }
    else if(avg>=80 && avg<90) {
        cout<<"Grade: A"<<endl;
    }
    else if(avg>=70 && avg<80) {
        cout<<"Grade: B+"<<endl;
    }
    else if(avg>=60 && avg<70) {
        cout<<"Grade: B"<<endl;
    }
    else if(avg>=50 && avg<60) {
        cout<<"Grade: C"<<endl;
    }
    else {
        cout<<"Grade: F"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    cout<<endl;
    StudentDb s[n];
    for(int i=0;i<n;i++){
    s[i].setData();
    s[i].display();
    calGrade(s[i]);
    StudentDb::showCount();
    cout<<endl;
    }
    return 0;
}