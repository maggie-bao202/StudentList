#include <iostream>
#include <cstring>
#include <vector>
#include<iterator>
using namespace std;

struct Student{
  char* fname;
  char* lname;
  int id;
  float gpa;
};

void addStudent(vector<Student*>);
void printStudent(vector<Student*>);
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
    addStudent(studentList);
  }
  else if (strcmp(keyword, "PRINT") == 0){
    //insert printStudent method
    printStudent(studentList);
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

void addStudent(vector<Student*> studentList){
  char first[20] = "Maggie";
  char last[20] = "Bao";
  int id = 463293;
  float gpa = 2.22;
  Student* student = new Student();
  cout << "Enter the first name:" << endl;
  //cin.get(first, 20);
  //cin.clear();
  //cin.ignore(9999, '\n');
  student -> fname = first;
  cout << "Enter the last name:" << endl;
  //cin.get(last, 20);
  //cin.clear();
  //cin.ignore(9999, '\n');
  student -> lname = last;
  cout << "Enter the Student Id:" << endl;
  //cin << id;
  //while (id > 1000000 || id < 99999){
  //cout << "Enter a 6 digit number." << endl;
  //cin << id;
  //}
  student -> id = id;
  //cout << "Enter the GPA:" << endl;
  //cin << gpa;
  //numId = charArrToNum(* gpa);
  //gpa = floor(gpa*100+0.5)/100;
  student -> gpa = gpa;
  cout << student -> fname << endl;
  studentList.push_back(student);
  cout << studentList.size() << endl;
  
}

/*float charArrToNum(char* arr){
   float numId = 0;
   for (int i = 0; i < strlen(arr); i++){
     numId += pow(10, 6-i)*(arr[i] - '0');
   }
   return numId;
   }*/
 
void printStudent(vector<Student*> studentList) {
   vector<Student*>::iterator it;
   cout << studentList.size() << endl;
   for(it = studentList.begin(); it != studentList.end(); it++)    {
     cout << (*it)->fname << " " << (*it)->lname << "," << (*it) ->id << "," << (*it)->gpa << endl;

   }
}

void deleteStudent(){
  
}
