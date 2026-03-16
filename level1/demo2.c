#include <stdio.h>

typedef struct {
    char name[50];
    float length;
    float width;
    float area;
} Rectangle;

Rectangle input();
float calculate_area(Rectangle rect);
void compare_areas(Rectangle r1, Rectangle r2, Rectangle r3);

Rectangle input()
{
    Rectangle rect;
    printf("Enter rectangle name: ");
    scanf("%s", rect.name);

    printf("Enter length: ");
    scanf("%f", &rect.length);

    printf("Enter width: ");
    scanf("%f", &rect.width);

    rect.area = calculate_area(rect);
    return rect;
}

float calculate_area(Rectangle rect)
{
    return rect.length * rect.width;
}

void compare_areas(Rectangle r1, Rectangle r2, Rectangle r3)
{
    if(r1.area >= r2.area && r1.area >= r3.area)
    {
        printf("Largest rectangle is: %s\n", r1.name);
        printf("Area: %.2f\n", r1.area);
    }
    else if(r2.area >= r1.area && r2.area >= r3.area)
    {
        printf("Largest rectangle is: %s\n", r2.name);
        printf("Area: %.2f\n", r2.area);
    }
    else
    {
        printf("Largest rectangle is: %s\n", r3.name);
        printf("Area: %.2f\n", r3.area);
    }
}

int main()
{
    Rectangle r1, r2, r3;

    r1 = input();
    r2 = input();
    r3 = input();

    compare_areas(r1, r2, r3);

    return 0;
}