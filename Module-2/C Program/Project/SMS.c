#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for student
struct Student
{
    int id;
    char name[50];
    int age;
    float marks;
};

// Union example for status
union Status
{
    int pass;   // 1 = pass
    int fail;   // 0 = fail
};

// Global variables
struct Student students[100];
int count = 0;

// Function declarations
void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();
void saveToFile();
void loadFromFile();

// Main function
int main()
{
    int choice;

    // Load data from file at start
    loadFromFile();

    do
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Update Student Marks\n");
        printf("5. Delete Student\n");
        printf("6. Save to File\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            searchStudent();
            break;
        case 4:
            updateStudent();
            break;
        case 5:
            deleteStudent();
            break;
        case 6:
            saveToFile();
            break;
        case 7:
            printf("Exiting... Data Saved!\n");
            saveToFile();
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    while(choice != 7);

    return 0;
}

// Function to add student
void addStudent()
{
    if(count >= 100)
    {
        printf("Database full!\n");
        return;
    }
    struct Student s;
    printf("Enter Student ID: ");
    scanf("%d", &s.id);
    getchar(); // clear newline

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);  // read full name with spaces

    printf("Enter Age: ");
    scanf("%d", &s.age);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    students[count] = s;
    count++;

    printf("Student Added Successfully!\n");
}

// Function to display all students
void displayStudents()
{
    if(count == 0)
    {
        printf("No records found!\n");
        return;
    }
    printf("\n--- Student Records ---\n");
    for(int i=0; i<count; i++)
    {
        printf("Id=%d Name=%s Age=%d Marks=%.2f\n",
               students[i].id, students[i].name, students[i].age, students[i].marks);

        union Status st;
        if(students[i].marks >= 40)
        {
            st.pass = 1;
            printf("Status: Pass\n");
        }
        else
        {
            st.fail = 0;
            printf("Status: Fail\n");
        }
        printf("----------------------\n");
    }
}

// Function to search student by ID
void searchStudent()
{
    int id;
    printf("Enter Student ID to search: ");
    scanf("%d", &id);
    for(int i=0; i<count; i++)
    {
        if(students[i].id == id)
        {
            printf("Record Found!\n");
            printf("Id=%d Name=%s Age=%d Marks=%.2f\n",
                   students[i].id, students[i].name, students[i].age, students[i].marks);
            return;
        }
    }
    printf("Student not found!\n");
}

// Function to update student marks
void updateStudent()
{
    int id;
    printf("Enter Student ID to update: ");
    scanf("%d", &id);
    for(int i=0; i<count; i++)
    {
        if(students[i].id == id)
        {
            printf("Enter new marks: ");
            scanf("%f", &students[i].marks);
            printf("Marks Updated!\n");
            return;
        }
    }
    printf("Student not found!\n");
}

// Function to delete student
void deleteStudent()
{
    int id, found = 0;
    printf("Enter Student ID to delete: ");
    scanf("%d", &id);
    for(int i=0; i<count; i++)
    {
        if(students[i].id == id)
        {
            found = 1;
            for(int j=i; j<count-1; j++)
            {
                students[j] = students[j+1];
            }
            count--;
            printf("Student Deleted!\n");
            break;
        }
    }
    if(!found)
    {
        printf("Student not found!\n");
    }
}

// Function to save data to file (Readable format)
void saveToFile()
{
    FILE *fp = fopen("students.txt", "w");
    if(fp == NULL)
    {
        printf("Error saving file!\n");
        return;
    }
    for(int i=0; i<count; i++)
    {
        fprintf(fp, "Id=%d Name=%s Age=%d Marks=%.2f\n",
                students[i].id,
                students[i].name,
                students[i].age,
                students[i].marks);
    }
    fclose(fp);
    printf("Data saved successfully to students.txt!\n");
}

// Function to load data from file
void loadFromFile()
{
    FILE *fp = fopen("students.txt", "r");
    if(fp == NULL)
    {
        return; // no file yet
    }
    while(fscanf(fp, "Id=%d Name=%49[^A] Age=%d Marks=%f\n",
                 &students[count].id,
                 students[count].name,
                 &students[count].age,
                 &students[count].marks) == 4)
    {
        count++;
    }
    fclose(fp);
}
