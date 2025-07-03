//Add student records (name, roll number, marks of 3 subjects).
//Calculate average and grade.
//Display all records.
//Save/load from file
#include <iostream>
using namespace std;
const int mstudent= 100;

struct student {
	string name;
	int roll;
	float marks[3];
	float average;
	char grade;
	
};

void inputstudent(student &s ){
cout <<"enter name of student "<<":"<<endl;
cin.ignore();
getline(cin,s.name);
cout <<"enter roll no of student "<<":"<<endl;
cin>>s.roll;
float total=0;
for(int i =0; i<3; i++){
cout <<"enter marks of subject "<<i+1<<endl;
cin>>s.marks[i];
total+=s.marks[i];

}
s.average=total/3;
if (s.average >= 80)
s.grade = 'A';
    else if (s.average >= 60)
s.grade = 'B';
    else if (s.average >= 40)
s.grade = 'C';
    else
s.grade = 'F';

}
void displayStudent(const student &s) {
cout <<"Name: " << s.name;
cout <<"Roll No: " << s.roll;
cout <<"Average: " << s.average;
cout <<"Grade: " << s.grade << endl;
}

int main() {
student students[mstudent];
int n;
cout <<"How many students? ";
cin >> n;
for(int i=0; i< n;i++) {
cout <<"\nEnter data for student"<<i+1<<":\n";
inputstudent(students[i]);
    }
cout <<" Student Records";
for(int i=0; i<n;i++) {
displayStudent(students[i]);
    }

    return 0;
}

