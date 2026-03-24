#include <stdio.h>

typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

void inputStudents(Student students[], int n);
void writeToTextFile(Student students[], int n, const char *filename);
int readFromTextFile(Student students[], const char *filename);
void printStudents(Student students[], int n);

void inputStudents(Student students[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter id: ");
        scanf("%d", &students[i].id);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }
}

void writeToTextFile(Student students[], int n, const char *filename)
{
    FILE *fp = fopen(filename, "w");

    for(int i = 0; i < n; i++)
    {
        fprintf(fp, "%d %s %.2f\n", students[i].id, students[i].name, students[i].marks);
    }

    fclose(fp);
}

int readFromTextFile(Student students[], const char *filename)
{
    FILE *fp = fopen(filename, "r");

    int i = 0;

    while(fscanf(fp, "%d %s %f", &students[i].id, students[i].name, &students[i].marks) != EOF)
    {
        i++;
    }

    fclose(fp);
    return i;
}

void printStudents(Student students[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d %s %.2f\n", students[i].id, students[i].name, students[i].marks);
    }
}

int main()
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    Student students[n];
    Student newStudents[n];

    inputStudents(students, n);

    writeToTextFile(students, n, "students.txt");

    int count = readFromTextFile(newStudents, "students.txt");

    printf("Students data:\n");
    printStudents(newStudents, count);

    return 0;
}