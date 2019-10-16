#include <iostream>
#include <cstring>

using namespace std;
void quitProgram();
void addStudent();
void printStudent();
void deleteStudent();

int main() {
  char keyword[10];
  bool stillPlaying == true;
  while(true){
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
  char fname[20];
  char lname[20];
  char id[7];
  char gpa[10];
  cout << "Enter the first name:" << endl;
  cin.get(fname, 20);
  cin.clear();
  cin.ignore(9999, '\n');
  cout << "Enter the last name:" << endl;
  cin.get(lname, 20);
  cin.clear();
  cin.ignore(9999, '\n');
  cout << "Enter the Student Id:" << endl;
  cin.get(id, 7);
  cin.clear();
  cin.ignore(9999, '\n');
  cout << "Enter the GPA:" << endl;
  cin.get(gpa, 10);
  cin.clear();
  cin.ignore(9999, '\n');
  if(gpa[4] < 5){
    //char to double, add 0.005
}

void printStudent(){
  
}

void deleteStudent(){
  
}

void quitProgram(){
  cout << "Have a nice day!" << endl;
  stillPlaying = false;
  exit(0); //close program     
}
