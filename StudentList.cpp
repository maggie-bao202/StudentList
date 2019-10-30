#include <iostream>
#include <cstring>
#include <vector>
#include<iterator>
#include<iomanip>
using namespace std;

struct Student{
  char fname[40];
  char lname[40];
  int id;
  float gpa;
};

void addStudent(vector<Student*>*);
void printStudent(vector<Student*>*);
void deleteStudent();
//double charArrToNum(char*);
  
int main() {

  vector<Student*> studentList;
  
  char* keyword = new char[10];

  Student* student = new Student();
  
  bool stillPlaying = true;
  while(stillPlaying == true){
    cout << "Type in a keyword (\"ADD\", \"PRINT\",\"DELETE\", or \"QUIT\")"<<endl;
    cin.get(keyword, 10); //put into array of 10. Extra char will be ignored
    cin.clear(); //clear, ignore fixes null bug
    cin.ignore(9999, '\n');
    if (strcmp(keyword, "ADD") == 0){
      //insert addStudent method
      addStudent(&studentList);
    }
    else if (strcmp(keyword, "PRINT") == 0){
      //insert printStudent method
      printStudent(&studentList);
    }
    else if (strcmp(keyword, "DELETE") == 0){
      //insert deleteStudent method
      deleteStudent();
    }
    else if(strcmp(keyword, "QUIT") == 0){
      cout << "Have a nice day!" << endl;
      stillPlaying = false; //close program

    }
    else{
      cout << "Make sure the keyword is capitalized." << endl;
    }
  }
  return 0;
}

void addStudent(vector<Student*>* studentList){
  Student* student = new Student();
  int iid = 0;
  float igpa = 0.0;
  cout << "Enter the first name: ";
  cin >> student->fname;
  cout << "Enter the last name: ";
  cin >> student->lname;
  cout << "Enter the Student Id: ";
  cin >> iid;
  while (iid > 999999 || iid < 100000){
    cout << "Enter a 6 digit number." << endl;
    cout << "Enter the Student Id: ";
    cin >> iid;
  }
  student->id = iid;
  cout << "Enter the GPA: ";
  cin >> igpa;
  while (igpa > 5.0 || igpa < 0.0){
    cout << "GPA must be less than 5.00 and greater than 0.00.";
    cout << "Enter the GPA: ";
    cin >> igpa;
  }
  student->gpa = igpa;
  cin.clear();
  cin.ignore(999, '\n');
  studentList->push_back(student);
}
 
void printStudent(vector<Student*>* studentList) {
   vector<Student*>::iterator it;
   for(it = studentList->begin(); it != studentList->end(); it++){
     cout << (*it)->fname << " ";
     cout << (*it)->lname << ", ";
     cout << fixed<<setprecision(2);
     cout << (*it) ->id << ", ";
     cout << (*it)->gpa << endl;

   }
}

void deleteStudent(vector<Student*>* studentList){
  vector<Student*>::iterator it;
  char ifname[40];
  cout << "Enter the first name of a student to remove: ";
  cin.get(ifname,40);
  cin.get();
  for(it = studentList->begin(); it != studentList->end(); it++){
    if (strcmp((*it)->fname, ifname) == 0){
      delete(*it);
      studentList -> erase(it);
    }
  }
  
}
