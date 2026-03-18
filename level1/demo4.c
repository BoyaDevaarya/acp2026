#include <stdio.h>
#include <string.h>

typedef struct {
    int flight_number;
    char destination[50];
    int available_seats;
} Flight_t;

void readFlights(int n, Flight_t f[]);
void searchByDestination(int n, Flight_t f[], char searchDest[]);

void readFlights(int n, Flight_t f[])
{
    for(int i = 0; i < n; i++)
    {
        printf("Enter flight number: ");
        scanf("%d", &f[i].flight_number);

        printf("Enter destination: ");
        scanf("%s", f[i].destination);

        printf("Enter available seats: ");
        scanf("%d", &f[i].available_seats);
    }
}

void searchByDestination(int n, Flight_t f[], char searchDest[])
{
    int found = 0;

    for(int i = 0; i < n; i++)
    {
        if(strcmp(f[i].destination, searchDest) == 0)
        {
            printf("Flight found: %d\n", f[i].flight_number);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("No flight found\n");
    }
}

int main()
{
    int n = 4;
    Flight_t f[4];
    char searchDest[50];

    readFlights(n, f);

    printf("Enter destination to search: ");
    scanf("%s", searchDest);

    searchByDestination(n, f, searchDest);

    return 0;
}