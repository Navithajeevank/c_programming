#include <stdio.h>

int main()
{
    char grade;

    printf("Enter grade (E, V, G, A): ");
    scanf(" %c", &grade);


    switch (grade)
    {
        case 'E':
        case 'e':
            printf("Description: Excellent\n");
            break;
        case 'V':
        case 'v':
            printf("Description: Very Good\n");
            break;
        case 'G':
        case 'g':
            printf("Description: Good\n");
            break;
        case 'A':
        case 'a':
            printf("Description: Average\n");
            break;
        default:
            printf("Invalid grade entered.\n");
    }

    return 0;
}
