#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

void inputStudents(Student students[], int n);
void writeToBinaryFile(Student students[], int n, const char *filename);
int readFromBinaryFile(Student students[], const char *filename);
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

void writeToBinaryFile(Student students[], int n, const char *filename)
{
    FILE *fp = fopen(filename, "wb");

    fwrite(students, sizeof(Student), n, fp);

    fclose(fp);
}

int readFromBinaryFile(Student students[], const char *filename)
{
    FILE *fp = fopen(filename, "rb");

    int count = 0;

    while(fread(&students[count], sizeof(Student), 1, fp) == 1)
    {
        count++;
    }

    fclose(fp);
    return count;
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

    writeToBinaryFile(students, n, "students.dat");

    int count = readFromBinaryFile(newStudents, "students.dat");

    printf("Students data:\n");
    printStudents(newStudents, count);

    return 0;
}