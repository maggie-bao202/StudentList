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
  char* id  = new char[999];
  int numId = 0;
  float gpa = 0.0;
  cout << "Enter the first name:" << endl;
  cin << student -> fname;
  cout << "Enter the last name:" << endl;
  cin << student -> lname;
  cout << "Enter the Student Id:" << endl;
  cin << student -> numId;
  /*while (strlen(id) != 7){
     cout << "Enter a 6 digit number." << endl;
    cin << student -> id;
    }*/
  cout << "Enter the GPA:" << endl;
  cin << student -> gpa;
  numId = charArrToNum(* gpa);
  /*while (strlen(gpa) != 4){
    cout << "Enter your GPA rounded to the nearest hundredth." << endl;
    }*/
  
}

float charArrToNum(char* arr){
   float numId = 0;
   for (int i = 0; i < strlen(arr); i++){
     numId += pow(10, 6-i)*(arr[i] - '0');
   }
   return numId;
}
 
void printStudent(char* fname, char* lname, int id, float gpa) {
   Student* student;
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
