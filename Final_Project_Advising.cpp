#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

void PrintSchedule(string arr[][7], int size = 7) { //katbeen gowa el column size w el row size bara
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }

}



class Student {
private:
    int id;
    int subf;
    int creditHours;
    string nameofsubs;
    string subs2;

public:
    Student(int studentId, int numsubfailed, int studentCreditHours, string nameofsubsF, string subs2)  //Constructor
        : id(studentId), subf(numsubfailed), creditHours(studentCreditHours), nameofsubs(nameofsubsF), subs2(subs2) {}

    int getId() const {
        return id;
    }

    int getCreditHours() const {
        return creditHours;
    }
    
    int getsubfailed() {
        return subf;
    }
    string getnamesub() const {
        return nameofsubs;
    }
    string getsubs2() const {
        return subs2;
    }
};


int main() {
    //Creating Schedule Year 1
    string arr1[7][7] = {
        {"course","Credit hours ","course name   ","Sunday            ","Monday          ","Tuesday          ","Wednesday       "},
        {"110   "," 4           ","Programming   ","8:30 AM-10:00 AM  ","                ","1:00 PM -2:30 PM ","                "},
        {"111   "," 3           ","Ethics        ","11:00 AM-12:30 PM ","                ","                 ","2:00 PM-3:30 PM "},
        {"131   "," 3           ","Statistics    ","                  ","8:30 AM-10:00 AM","                 ","8:30 AM-10:00 AM"},
        {"141   "," 3           ","EAP           ","2:00 PM-3:30 PM   ","                ","10:00 AM-11:30 AM","                "},
        {"121   "," 3           ","Physics       ","                  ","12:00 PM-1:30 PM","3:00 PM-4:30 PM  ","                "},
        {"      ","             ","              ","                  ","                ","Total credit hours:","  16          "}
    };


   
    //Creating schedule Year 2
    string arr2[7][7] = {
        {"course","Credit hours ","course name           ","Sunday            ","Monday          ","Tuesday          ","Wednesday       "},
        {"210   "," 4           ","Data Structures       ","8:30 AM-10:00 AM  ","                ","1:00 PM -2:30 PM ","                "},
        {"230   "," 4           ","Database Management   ","11:00 AM-12:30 PM ","                ","                 ","2:00 PM-3:30 PM "},
        {"211   "," 4           ","OOP                   ","                  ","8:30 AM-10:00 AM","                 ","8:30 AM-10:00 AM"},
        {"220   "," 3           ","Computer Organization ","2:00 PM-3:30 PM   ","                ","10:00 AM-11:30 AM","                "},
        {"120   "," 3           ","Desktop publishing    ","                  ","12:00 PM-1:30 PM","3:00 PM-4:30 PM  ","                "},
        {"      ","             ","                      ","                  ","                ","Total credit hours:","  33          "}
    };

    //Creating Schedule year 3
    string arr3[7][7] = {
        {"course","Credit hours ","course name             ","Sunday            ","Monday          ","Tuesday          ","Wednesday       "},
        {"340   "," 3           ","Artificial Intelligence ","8:30 AM-10:00 AM  ","                ","1:00 PM -2:30 PM ","                "},
        {"331   "," 3           ","Statistical Analysis    ","11:00 AM-12:30 PM ","                ","                 ","2:00 PM-3:30 PM "},
        {"360   "," 4           ","Image Processing        ","                  ","8:30 AM-10:00 AM","                 ","8:30 AM-10:00 AM"},
        {"320   "," 4           ","Software Engineering    ","2:00 PM-3:30 PM   ","                ","10:00 AM-11:30 AM","                "},
        {"311   "," 3           ","Scientific thinking     ","                  ","12:00 PM-1:30 PM","3:00 PM-4:30 PM  ","                "},
        {"      ","             ","                        ","                  ","                ","Total credit hours:","  69          "}
    };

    //Creating Schedule Year 4
    string arr4[7][7] = {
        {"course","Credit hours ","course name                ","Sunday            ","Monday          ","Tuesday          ","Wednesday       "},
        {"430   "," 3           ","Network Security           ","8:30 AM-10:00 AM  ","                ","1:00 PM -2:30 PM ","                "},
        {"410   "," 4           ","Distributed Systems        ","11:00 AM-12:30 PM ","                ","                 ","2:00 PM-3:30 PM "},
        {"420   "," 3           ","Artificial Intelligence || ","                  ","8:30 AM-10:00 AM","                 ","8:30 AM-10:00 AM"},
        {"411   "," 3           ","Image Processing ||        ","2:00 PM-3:30 PM   ","                ","10:00 AM-11:30 AM","                "},
        {"491   "," 0           ","Senior Project             ","                  ","12:00 PM-1:30 PM","3:00 PM-4:30 PM  ","                "},
        {"      ","             ","                           ","                  ","                ","Total credit hours:","  101          "}
    };



    //Create a vector of students
    vector<Student> students;
    students.push_back(Student(1101, 0, 0, " ", " "));
    students.push_back(Student(2101, 2, 26, "DLD", "Problem Solving"));
    students.push_back(Student(2102, 0, 33, " ", " "));
    students.push_back(Student(2103, 1, 29, "Problem Solving", " "));
    students.push_back(Student(2104, 1, 30, "DLD", " "));
    students.push_back(Student(2105, 1, 30, "Entrepreneurship", " "));
    students.push_back(Student(3101, 0, 69, " ", " "));
    students.push_back(Student(3102, 1, 65, "Problem Solving", " "));
    students.push_back(Student(3103, 1, 66, "Discrete Math", " "));
    students.push_back(Student(4101, 0, 101, " ", " "));

    // Search for a student with ID 2100
    int targetId;
    cout << "enter your id number";
    cin >> targetId;      //student will enter his id
a:
    Student *foundStudent = nullptr;

    for (auto& student : students) {     //auto de Data type
        if (student.getId() == targetId) {
            foundStudent = &student;
            break;
        }
    }

    // Display the result
    if (foundStudent != nullptr) {
        cout << "Student found:" << endl;
        cout << "ID: " << foundStudent->getId() << endl;
        cout << "Credit Hours: " << foundStudent->getCreditHours() << endl;
        cout << "Number of subjects failed: " << foundStudent->getsubfailed() << endl;
        cout << "Name of subjects failed: " << foundStudent->getnamesub() << "   " << foundStudent->getsubs2() << endl;


        if (foundStudent->getsubfailed() == 0 && foundStudent->getId() / 1000 == 1)
        {
            //display schedule
            PrintSchedule(arr1);
        }

        //year2 schedule
        if (foundStudent->getsubfailed() == 0 && foundStudent->getId() / 1000 == 2)
        {
            PrintSchedule(arr2);
        }

        //year 3 schedule
        if (foundStudent->getsubfailed() == 0 && foundStudent->getId() / 1000 == 3)
        {
            PrintSchedule(arr3);
        }

        //year 4 schedule
        if (foundStudent->getsubfailed() == 0 && foundStudent->getId() / 1000 == 4)
        {
            PrintSchedule(arr4);
        }

        //Failing
        if (foundStudent->getsubfailed() > 0) {
            switch (foundStudent->getId() / 1000) {  //For the Years
            case 2:
                switch (foundStudent->getsubfailed()) {    //For the number of subjects failed
                case 1:
                    //Prerequisite
                    if (foundStudent->getnamesub() == "DLD") {
                        arr2[4][2] = "DLD                      ";
                        arr2[6][6] = " 30 ";
                        PrintSchedule(arr2);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Problem Solving") {
                        arr2[1][2] = "Problem Solving        ";
                        arr2[3][2] = "Islamic History       ";
                        arr2[3][1] = "3 ";
                        arr2[6][6] = " 29";
                        PrintSchedule(arr2);
                        break;
                    }
                    else {
                        //elective
                        arr2[6][6] = "30";
                        PrintSchedule(arr2);
                        break;
                    }

                case 2:
                    if (foundStudent->getnamesub() == "DLD" && foundStudent->getsubs2() == "Problem Solving" || foundStudent->getnamesub() == "Problem Solving" && foundStudent->getsubs2() == "DLD") {
                        //2 PreRequisites
                        arr2[4][2] = "DLD                      ";
                        arr2[1][2] = "Problem Solving        ";
                        arr2[3][2] = "Islamic History       ";
                        arr2[3][1] = "3 ";
                        arr2[6][6] = "26 ";
                        PrintSchedule(arr2);
                        break;
                    }
                    //wahda prerequisite w wahda elective
                    else if (foundStudent->getnamesub() == "DLD") {
                        arr2[4][2] = "DLD                      ";
                        arr2[6][6] = "27 ";
                        PrintSchedule(arr2);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Problem Solving") {
                        arr2[1][2] = "Problem Solving        ";
                        arr2[3][2] = "Islamic History       ";
                        arr2[3][1] = "3 ";
                        arr2[6][6] = "26";
                        PrintSchedule(arr2);
                        break;
                    }

                } break;

            case 3: //year 3
                switch (foundStudent->getsubfailed()) {   //For the number of subjects failed
                case 1:
                    //Pre-Requisite
                    if (foundStudent->getnamesub() == "Problem Solving") {
                        arr3[1][2] = " ";
                        arr3[1][1] = " ";
                        arr3[3][2] = "Problem Solving";
                        arr3[6][6] = "65";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Statistics") {
                        arr3[2][2] = "Statistics ";
                        arr3[6][6] = "66";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Discrete Math") {
                        arr3[3][2] = "Discrete Math";
                        arr3[3][1] = "3";
                        arr3[6][6] = "66";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "OOP") {
                        arr3[4][2] = "OOP";
                        arr3[6][6] = "65";
                        PrintSchedule(arr3);
                        break;
                    }
                    else {
                        //Elective
                        arr3[6][6] = "66";
                        PrintSchedule(arr3);
                        break;
                    }
                case 2:
                    //wahda pre-requisite w wahda elective
                    if (foundStudent->getnamesub() == "Problem Solving") {
                        arr3[1][2] = " ";
                        arr3[1][1] = " ";
                        arr3[3][2] = "Problem Solving";
                        arr3[6][6] = "62";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Statistics") {
                        arr3[2][2] = "Statistics ";
                        arr3[6][6] = "63";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Discrete Math") {
                        arr3[3][2] = "Discrete Math";
                        arr3[3][1] = "3";
                        arr3[6][6] = "63";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "OOP") {
                        arr3[4][2] = "OOP";
                        arr3[6][6] = "62";
                        PrintSchedule(arr3);
                        break;
                    }
                    //Both are pre-requisites
                    else if (foundStudent->getnamesub() == "Problem Solving" && foundStudent->getsubs2() == "Statistics" || foundStudent->getnamesub() == "statistics" && foundStudent->getsubs2() == "Problem Solving") {
                        arr3[1][2] = " ";
                        arr3[1][1] = " ";
                        arr3[3][2] = "Problem Solving";
                        arr3[2][2] = "Statistics ";
                        arr3[6][6] = "62";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Problem Solving" && foundStudent->getsubs2() == "Discrete Math" || foundStudent->getnamesub() == "Discrete Math" && foundStudent->getsubs2() == "Problem Solving") {
                        arr3[1][1] = "4";
                        arr3[1][2] = "Problem Solving";
                        arr3[3][2] = "Discrete Math";
                        arr3[3][1] = "3";
                        arr3[6][6] = "62";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Problem Solving" && foundStudent->getsubs2() == "OOP" || foundStudent->getnamesub() == "OOP" && foundStudent->getsubs2() == "Problem Solving") {
                        arr3[1][2] = " ";
                        arr3[1][1] = " ";
                        arr3[3][2] = "Problem Solving";
                        arr3[4][2] = "OOP";
                        arr3[6][6] = "61";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Statistics " && foundStudent->getsubs2() == "Discrete Math" || foundStudent->getnamesub() == "Discrete Math" || foundStudent->getsubs2() == "Statistics") {
                        arr3[2][2] = "Statistics ";
                        arr3[3][2] = "Discrete Math";
                        arr3[3][1] = "3";
                        arr3[6][6] = "63";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Statistics " && foundStudent->getsubs2() == "OOP" || foundStudent->getsubs2() == "OOP" && foundStudent->getnamesub() == "Statistics ") {
                        arr3[2][2] = "Statistics ";
                        arr3[4][2] = "OOP";
                        arr3[6][6] = "62";
                        PrintSchedule(arr3);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Discrete Math" && foundStudent->getsubs2() == "OOP" || foundStudent->getnamesub() == "OOP" && foundStudent->getsubs2() == "Discrete Math") {
                        arr3[3][2] = "Discrete Math";
                        arr3[3][1] = "3";
                        arr3[4][2] = "OOP";
                        arr3[6][6] = "62";
                        PrintSchedule(arr3);
                        break;
                    }
                } break;
            case 4:
                switch (foundStudent->getsubfailed()) {   //For the number of subjects failed
                case 1:
                    //Pre-Requisite
                    if (foundStudent->getnamesub() == "Computer Networks") {
                        arr4[1][2] = "Computer Networks";
                        arr4[6][6] = "97";
                        PrintSchedule(arr4);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Operating systems") {
                        arr4[2][2] = "Operating Systems";
                        arr4[6][6] = "98";
                        PrintSchedule(arr4);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Software engineering") {
                        arr4[5][3] = "Software engineering";
                        arr4[6][6] = "98";
                        PrintSchedule(arr4);
                        break;
                    }
                    //Elective
                    else {
                        arr4[6][6] = "98";
                        PrintSchedule(arr4);
                        break;
                    }
                case 2: //Both are pre-Requisites
                    if (foundStudent->getnamesub() == "Computer Networks" && foundStudent->getsubs2() == "Operating systems" || foundStudent->getnamesub() == "Operating systems" && foundStudent->getsubs2() == "Computer Networks") {
                        arr4[3][1] = "Computer Networks";
                        arr4[3][2] = "Operating Systems";
                        arr4[6][6] = "94";
                        PrintSchedule(arr4);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Computer Networks" && foundStudent->getsubs2() == "software engineering" || foundStudent->getnamesub() == "software engineering" && foundStudent->getsubs2() == "Computer Networks") {
                        arr4[1][3] = "computer networks";
                        arr4[5][3] = "software engineering";
                        arr4[6][6] = "95";
                        PrintSchedule(arr4);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Operating systems" && foundStudent->getsubs2() == "software engineering" || foundStudent->getnamesub() == "software engineering" && foundStudent->getsubs2() == "Operating Systems") {
                        arr4[2][3] = "Operating Systems";
                        arr4[5][3] = "software engineering";
                        arr4[6][6] = "98";
                        PrintSchedule(arr4);
                        break;  
                    }
                    // wahda pre wahda elective
                    else if (foundStudent->getnamesub() == "Computer Networks" || foundStudent->getsubs2() == "Computer Networks") {
                        arr4[1][1] = "Computer Networks";
                        arr4[6][6] = "94";   // alelt cred hours for el stundent bas mesh habadel subjects for electives
                        PrintSchedule(arr4);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Operating systems" || foundStudent->getsubs2() == "Operating systems") {
                        arr4[2][2] = "Operating Systems";
                        arr4[6][6] = "95";
                        PrintSchedule(arr4);
                        break;
                    }
                    else if (foundStudent->getnamesub() == "Software engineering" || foundStudent->getsubs2() == "Software engineering") {
                        arr4[5][3] = "Software enjneering";
                        arr4[6][6] = "94";
                        PrintSchedule(arr4);
                        break;
                    }
                    else { // two electives
                        arr4[6][6] = "95";
                        PrintSchedule(arr4);
                    }
                }
            }
        }
    }
    else {
        cout << "Student not found." << endl;
        int enteridnumber;
        int didyoufail;
        int entercredithour;
        string enternameofsub;
        string enternameofsub2;
        cout << " please enter id ";
        cin >> enteridnumber;
        cout << " please num of subjects you failed ";
        cin >> didyoufail;
        cout << " please enter credit hours ";
        cin >> entercredithour;
        cout << " please enter name of sub ";
        getline(cin, enternameofsub);
        getline(cin, enternameofsub);
        cout << " please enter name of sub ";
        getline(cin, enternameofsub2);
        students.push_back(Student(enteridnumber, didyoufail, entercredithour, enternameofsub, enternameofsub2));
        goto a;

    }
}

