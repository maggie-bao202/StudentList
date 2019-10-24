#include <iostream>
#include <cstring>

using namespace std;
void quitProgram();
void addStudent();
void printStudent();
void deleteStudent();
double charArrToNum(char*);

struct Student{
  char* fname;
  char* lname;
  int id;
  float gpa;
};
  
int main() {
  char* fname = new char[20];
  char* lname = new char[20];
  char* id = new char[7];
  char* gpa = new char[10];
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
    addStudent();
    vector
  }
  else if (strcmp(keyword, "PRINT") == 0){
    //insert printStudent method
    printStudent();
  }
  else if (strcmp(keyword, "DELETE") == 0){
    //insert deleteStudent method
    deleteStudent();
  }
  else if(strcmp(keyword, "QUIT") == 0){
    //insert quitProgram method
    quitProgram();
  }
  else{
    cout << "Make sure the keyword is capitalized." << endl;
  }
  }
  return 0;
}

void addStudent(){
  Student* student = new Student();
  char* fname = new char[20];
  char* lname = new char[20];
  char* id = new char[7];
  char* gpa = new char[10];
  double numId = 0;
  cout << "Enter the first name:" << endl;
  cin.get(fname, 20);
  cin.clear();
  cin.ignore(9999, '\n');
  student -> fname = fname;
  cout << "Enter the last name:" << endl;
  cin.get(lname, 20);
  cin.clear();
  cin.ignore(9999, '\n');
  student -> lname = lname;
  cout << "Enter the Student Id:" << endl;
  cin.get(id, 7);
  cin.clear();
  cin.ignore(9999, '\n');
  charArrToNum(id);
  while (numId > 999999 || numId < 1000000){
    cout << "Enter a 6 digit number." << endl;
  }
  student -> id = numId;
  cout << "Enter the GPA:" << endl;
  cin.get(gpa, 10);
  cin.clear();
  cin.ignore(9999, '\n');
  charArrToNum(gpa);
  int truncate = gpa[4];
  if(truncate > 5){
    gpa[3] = gpa[3] + 1; //char to double, add 0.005
  }
  student -> gpa = gpa;
}

 float charArrToNum(char* arr){
   float numId = 0;
   for (int i = 0; i != 0; i++){
     numId = (arr[i] - '0') + (numId * 10);
   }
   return numId;
 }
 
void printStudent(char* fname, char* lname, int id, float gpa) {
   Student student;
   cout << student -> fname << "ID: " << student.id << "GPA: ";
   cout << student.gpa << endl;
}

void deleteStudent(){
  
}

void quitProgram(){
  bool stillPlaying;
  cout << "Have a nice day!" << endl;
  stillPlaying = false; //close program     
}
