#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void StudentsData() {
  vector<string> studentsInfo;
  string changeStudent;
  string addStudent;
  string userInt;
  string userNumInput;

  ifstream infile;
  ofstream newFile("UpdatedStudents.txt");
  infile.open("Students.txt");

  string input;

  while (getline(infile, input)) {
    studentsInfo.push_back(input);
  }
  cout << "                           ** Students Enrolled **" << endl;
  cout << endl;

  for (int i = 0; i < studentsInfo.size(); i++) {
    cout << i + 1 << ": " << studentsInfo.at(i) << endl;
  }
  cout << endl;
  cout << "*** Choose one of the following using the menu below by typing a "
          "number ***"
       << endl;
  cout << endl;
  cout << "1: View Student Information" << endl;
  cout << "2: Add a new Student" << endl;
  cout << "3: Exit " << endl;
  cout << endl;
  getline(cin, userInt);

  if (userInt == "1") {
    cout << endl;
    cout << "*** Please choose which Student to view. Enter the respective "
            "number. ***"
         << endl;
    cout << endl;
    cout << "Student 1" << endl;
    cout << "Student 2" << endl;
    cout << "Student 3" << endl;
    cout << "Student 4" << endl;
    cout << "Student 5" << endl;
    cout << "Student 6" << endl;
    cout << "Student 7" << endl;
    cout << "Student 8" << endl;
    cout << "Student 9" << endl;
    cout << "Student 10" << endl;
    cout << "Student 11" << endl;
    cout << "Student 12" << endl;
    cout << "Student 13" << endl;
    cout << "Student 14" << endl;
    cout << "Student 15" << endl;
    cout << endl;
    getline(cin, userNumInput);

    if (userNumInput == "1") {
      ifstream inFile("Ashlyn Lord .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "2") {
      ifstream inFile("Josh Basset .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "3") {
      ifstream inFile("Reo Maguire .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "4") {
      ifstream inFile("Ameerah Copeland .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "5") {
      ifstream inFile("David Dickinson .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "6") {
      ifstream inFile("Larissa Akhtar .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "7") {
      ifstream inFile("Annette Solis .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "8") {
      ifstream inFile("Adam Mathwes .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "9") {
      ifstream inFile("Albert Buxton .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "10") {
      ifstream inFile("Juliette Kouma .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "11") {
      ifstream inFile("Kristian Sampson .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "12") {
      ifstream inFile("Devon Hatfield .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "13") {
      ifstream inFile("Ryan Travis .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "14") {
      ifstream inFile("Ingrid Moran .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
    if (userNumInput == "15") {
      ifstream inFile("Cienna Hernandez .txt");
      while (inFile) {
        string strInput;
        getline(inFile, strInput);
        cout << strInput << endl;
      }
    }
  }
  if (userInt == "2") {
    cout << endl;
    cout << "*** Type out the name of the student to be added ***" << endl;
    getline(cin, addStudent);
    studentsInfo.push_back(addStudent);
    ofstream newFile("UpdatedStudents.txt");
    for (int i = 0; i < studentsInfo.size(); i++) {
      newFile << studentsInfo[i] << endl;
    }
    cout << endl;
    cout << "*** Done, here is the updated list ***" << endl;
    cout << endl;
    for (int i = 0; i < studentsInfo.size(); i++) {
      cout << i + 1 << ": " << studentsInfo[i] << endl;
    }
  }
  if (userInt == "3") {
    cout << endl;
    cout << "*** Thank you! ***" << endl;
  }
}
void CoursesData() {
  vector<string> coursesInfo;
  string editCourse;
  string userInput;
  string userNumInput;

  ifstream infile;
  ofstream newFile("UpdatedCourses.txt");
  infile.open("Courses.txt");

  string input;

  while (getline(infile, input)) {
    coursesInfo.push_back(input);
  }
  cout << "                 *** These are currently the available courses ***"
       << endl;
  cout << endl;
  for (int i = 0; i < coursesInfo.size(); i++) {
    cout << i + 1 << ": " << coursesInfo.at(i) << endl;
  }
  cout << endl;
  cout << "        *** Please choose one of the following by using the menu "
          "below ***"
       << endl;
  cout << endl;
  cout << "1) Update Existing Course" << endl;
  cout << "2) Exit" << endl;
  cout << endl;

  getline(cin, userInput);
  if (userInput == "1") {
    cout << endl;
    cout << "*** Enter the number that corresponds to the course you would "
            "like to update ***"
         << endl;
    cout << endl;
    cout << "Course 1" << endl;
    cout << "Course 2" << endl;
    cout << "Course 3" << endl;
    cout << "Course 4" << endl;
    cout << "Course 5" << endl;
    cout << "Course 6" << endl;
    cout << "Course 7" << endl;
    cout << "Course 8" << endl;
    cout << "Course 9" << endl;
    cout << "Course 10" << endl;
    cout << "Course 11" << endl;
    cout << "Course 12" << endl;
    cout << "Course 13" << endl;
    cout << "Course 14" << endl;
    cout << "Course 15" << endl;
    cout << "Course 16" << endl;
    cout << "Course 17" << endl;
    cout << "Course 18" << endl;
    cout << "Course 19" << endl;
    cout << endl;
    getline(cin, userNumInput);

    if (userNumInput == "1") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[0] = editCourse;
    }
    if (userNumInput == "2") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[1] = editCourse;
    }
    if (userNumInput == "3") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[2] = editCourse;
    }
    if (userNumInput == "4") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[3] = editCourse;
    }
    if (userNumInput == "5") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[4] = editCourse;
    }
    if (userNumInput == "6") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[5] = editCourse;
    }
    if (userNumInput == "7") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[6] = editCourse;
    }
    if (userNumInput == "8") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[7] = editCourse;
    }
    if (userNumInput == "9") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[8] = editCourse;
    }
    if (userNumInput == "10") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[9] = editCourse;
    }
    if (userNumInput == "11") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[10] = editCourse;
    }
    if (userNumInput == "12") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[11] = editCourse;
    }
    if (userNumInput == "13") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[12] = editCourse;
    }
    if (userNumInput == "14") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[13] = editCourse;
    }
    if (userNumInput == "15") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[14] = editCourse;
    }
    if (userNumInput == "16") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[15] = editCourse;
    }
    if (userNumInput == "17") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[16] = editCourse;
    }
    if (userNumInput == "18") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[17] = editCourse;
    }
    if (userNumInput == "19") {
      cout << "*** Make any changes if necessary ***" << endl;
      cout << endl;
      getline(cin, editCourse);
      coursesInfo[18] = editCourse;
    }
    ofstream newFile("UpdatedCourses.txt");
    cout << endl;
    cout << "*** Here is the updated list of Courses ***" << endl;
    cout << endl;
    for (int i = 0; i < coursesInfo.size(); i++) {
      newFile << coursesInfo[i] << endl;
    }
    for (int i = 0; i < coursesInfo.size(); i++) {
      cout << i + 1 << ": " << coursesInfo[i] << endl;
    }
  }
  if (userInput == "2") {
    cout << endl;
    cout << "*** Thank You! ***" << endl;
  }
}
void DegreePlanData() {
  vector<string> degreeInfo;
  string userInt;
  string userNumInput;

  cout << endl;
  cout << "*** Please enter the number that refers to the Degree Plan you "
          "would like to view ***"
       << endl;
  cout << endl;
  cout << "1) Computer Science Degree" << endl;
  cout << "2) Math Degree" << endl;
  cout << "3) History Degree" << endl;
  cout << "4) Biology Degree" << endl;
  cout << endl;
  getline(cin, userInt);

  if (userInt == "1") {
    ifstream inFile("ComputerScienceDegree.txt");
    while (inFile) {
      string strInput;
      getline(inFile, strInput);
      cout << strInput << endl;
    }
  }
  if (userInt == "2") {
    ifstream inFile("MathDegree.txt");
    while (inFile) {
      string strInput;
      getline(inFile, strInput);
      cout << strInput << endl;
    }
  }
  if (userInt == "3") {
    ifstream inFile("HistoryDegree.txt");
    while (inFile) {
      string strInput;
      getline(inFile, strInput);
      cout << strInput << endl;
    }
  }
  if (userInt == "4") {
    ifstream inFile("BiologyDegree.txt");
    while (inFile) {
      string strInput;
      getline(inFile, strInput);
      cout << strInput << endl;
    }
  }
}
void SemesterScheduleData() {
  vector<string> semesterInfo;
  string editSchedule;
  string userInput;
  string userNumInput;

  ifstream infile;
  ofstream newfile("UpdatedSemesterSchedule.txt");
  infile.open("SemesterSchedule.txt");

  string input;

  while (getline(infile, input)) {
    semesterInfo.push_back(input);
  }
  cout << " *** Here are the available courses for the semester *** " << endl;
  cout << endl;

  for (int i = 0; i < semesterInfo.size(); i++) {
    cout << i + 0 << ": " << semesterInfo.at(i) << endl;
  }
  cout << endl;
  cout << " *** Please choose one of the following by using the menu below ***"
       << endl;
  cout << endl;
  cout << "1) Update a course for the semester" << endl;
  cout << "2) Exit" << endl;
  cout << endl;

  getline(cin, userInput);
  if (userInput == "1") {
    cout << endl;
    cout << "*** Enter the number that corresponds to the course you would "
            "like to update ***"
         << endl;
    cout << endl;
    cout << "Course 1" << endl;
    cout << "Course 2" << endl;
    cout << "Course 3" << endl;
    cout << "Course 4" << endl;
    cout << "Course 5" << endl;
    cout << "Course 6" << endl;
    cout << "Course 7" << endl;
    cout << "Course 8" << endl;
    cout << "Course 9" << endl;
    cout << "Course 10" << endl;
    cout << "Course 11" << endl;
    cout << "Course 12" << endl;
    cout << "Course 13" << endl;
    cout << "Course 14" << endl;
    cout << "Course 15" << endl;
    cout << "Course 16" << endl;
    cout << "Course 17" << endl;
    cout << "Course 18" << endl;
    cout << "Course 19" << endl;
    cout << endl;
    getline(cin, userNumInput);

    if (userNumInput == "1") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "|     |       |                               |                 "
              "   |              |      |                               |      "
              "      |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[1] = editSchedule;
    }
    if (userNumInput == "2") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "|     |       |                               |                 "
              "   |              |      |                               |      "
              "      |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[2] = editSchedule;
    }
    if (userNumInput == "3") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "|     |       |                               |                 "
              "   |              |      |                               |      "
              "      |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[3] = editSchedule;
    }
    if (userNumInput == "4") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "|     |       |                               |                 "
              "   |              |      |                               |      "
              "      |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[4] = editSchedule;
    }
    if (userNumInput == "5") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "|     |       |                               |                 "
              "   |              |      |                               |      "
              "      |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[5] = editSchedule;
    }
    if (userNumInput == "6") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "|     |       |                               |                 "
              "   |              |      |                               |      "
              "      |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[6] = editSchedule;
    }
    if (userNumInput == "7") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "|     |       |                               |                 "
              "   |              |      |                               |      "
              "      |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[7] = editSchedule;
    }
    if (userNumInput == "8") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "|     |       |                               |                 "
              "   |              |      |                               |      "
              "      |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[8] = editSchedule;
    }
    if (userNumInput == "9") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "|     |       |                               |                 "
              "   |              |      |                               |      "
              "      |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[9] = editSchedule;
    }
    if (userNumInput == "10") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "     |       |                               |                  "
              "  |              |      |                               |       "
              "     |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[10] = editSchedule;
    }
    if (userNumInput == "11") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "     |       |                               |                  "
              "  |              |      |                               |       "
              "     |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[11] = editSchedule;
    }
    if (userNumInput == "12") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "     |       |                               |                  "
              "  |              |      |                               |       "
              "     |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[12] = editSchedule;
    }
    if (userNumInput == "13") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "     |       |                               |                  "
              "  |              |      |                               |       "
              "     |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[13] = editSchedule;
    }
    if (userNumInput == "14") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "     |       |                               |                  "
              "  |              |      |                               |       "
              "     |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[14] = editSchedule;
    }
    if (userNumInput == "15") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "     |       |                               |                  "
              "  |              |      |                               |       "
              "     |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[15] = editSchedule;
    }
    if (userNumInput == "16") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "     |       |                               |                  "
              "  |              |      |                               |       "
              "     |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[16] = editSchedule;
    }
    if (userNumInput == "17") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "     |       |                               |                  "
              "  |              |      |                               |       "
              "     |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[17] = editSchedule;
    }
    if (userNumInput == "18") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "     |       |                               |                  "
              "  |              |      |                               |       "
              "     |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[18] = editSchedule;
    }
    if (userNumInput == "19") {
      cout << " *** Make any changes if necessary, use the following template "
              "to input the information in the correct spot. Keep information "
              "between each dashed line. *** "
           << endl;
      cout << endl;
      cout << "     |       |                               |                  "
              "  |              |      |                               |       "
              "     |"
           << endl;
      getline(cin, editSchedule);
      semesterInfo[19] = editSchedule;
    }
    ofstream newFile("UpdatedSemesterSchedule.txt");
    cout << endl;
    cout << "*** Here is the updated Semester Schedule ***" << endl;
    cout << endl;
    for (int i = 0; i < semesterInfo.size(); i++) {
      newFile << semesterInfo[i] << endl;
    }
    for (int i = 0; i < semesterInfo.size(); i++) {
      cout << i + 0 << ": " << semesterInfo[i] << endl;
    }
  }
  if (userInput == "2") {
    cout << endl;
    cout << "*** Thank You! ***" << endl;
  }
}
int main() {
  string userInput;

  cout << endl;
  cout << "*** Hello, Welcome to the Degree Planning System. Please type a "
          "number to see the provided information. ***"
       << endl;
  cout << endl;
  cout << "1: Students" << endl;
  cout << "2: Courses" << endl;
  cout << "3: Degree Plan" << endl;
  cout << "4: Semester Schedule" << endl;
  cout << "5: Quit" << endl;
  cout << endl;

  getline(cin, userInput);

  if (userInput == "1") {
    StudentsData();
  }
  if (userInput == "2") {
    CoursesData();
  }
  if (userInput == "3") {
    DegreePlanData();
  }
  if (userInput == "4") {
    SemesterScheduleData();
  }
  if (userInput == "5") {
    cout << endl;
    cout << "*** Have a good day! ***" << endl;
  }
  return 0;
}
