#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

struct student
{
    string name;
    vector<float> grades;
};

vector<student> students;


void saveToFile()
{
    ofstream data("./Data/data.txt");

    if (!data)
    {
        cout << "Error: cannot open file for writing! \n";
        return;
    }

    for (const auto &stud : students)
    {
        data << stud.name << " ";
        for (float g : stud.grades)
        {
            data << g << " ";
        }
        data << "\n";
    }

    data.close();
}


void loadFromFile()
{
    ifstream data("./Data/data.txt");

    if (!data)
    {
        cout << "Error: cannot open file for reading! \n";
        return;
    }

    students.clear();

    string name;
    while (data >> name)
    {
        student newStudent;
        newStudent.name = name;
        float grade;

        while (data.peek() != '\n' && data >> grade)
        {
            newStudent.grades.push_back(grade);
        }

        students.push_back(newStudent);
    }

    data.close();
}


void addGrades()
{
    string name;
    float grade;

    while (true)
    {
        cout << "Enter student name (enter 'n'/'N' to exit): ";
        getline(cin, name);
        if (name == "N" || name == "n")
            break;

        student newStudent;
        newStudent.name = name;

        cout << "Enter grades for " << name << " (enter '-1' to finish): \n";
        while (cin >> grade && grade >= 0)
        {
            newStudent.grades.push_back(grade);
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        students.push_back(newStudent);
        saveToFile(); 
    }
}


void gradeAverage()
{
    float sum = 0;
    int count = 0;

    for (const auto &stud : students)
    {
        for (float g : stud.grades)
        {
            sum += g;
            count++;
        }
    }

    if (count == 0)
    {
        cout << "No grades available.\n";
        return;
    }

    cout << "The average grade is: " << sum / count << "\n";
}


void maxMin()
{
    if (students.empty())
    {
        cout << "No data available.\n";
        return;
    }

    float maxGrade = -1e9, minGrade = 1e9;

    for (const auto &stud : students)
    {
        for (float g : stud.grades)
        {
            if (g > maxGrade)
                maxGrade = g;
            if (g < minGrade)
                minGrade = g;
        }
    }

    cout << "The highest grade: " << maxGrade << "\n";
    cout << "The lowest grade: " << minGrade << "\n";
}


int main()
{
    loadFromFile();

    int num;
    while (true)
    {
        cout << "\n";
        cout << "========================== \n";
        cout << "        MAIN MENU         \n";
        cout << "========================== \n";
        cout << "1. Add grades of students. \n";
        cout << "2. Calculate average grade. \n";
        cout << "3. Get min/max of grades. \n";
        cout << "Press '0' to exit. \n";
        cout << "Enter your choice: ";
        cin >> num;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (num == 0)
        {
            cout << "The program successfully closed...\n";
            break;
        }

        switch (num)
        {
        case 1:
            addGrades();
            break;
        case 2:
            gradeAverage();
            break;
        case 3:
            maxMin();
            break;
        default:
            cout << "Invalid choice! Please enter a number between 0 and 3.\n";
            break;
        }
    }

    return 0;
}
