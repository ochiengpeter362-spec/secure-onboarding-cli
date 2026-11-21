#include <stdio.h>

// 1. Define the Patient structure (4 Marks)
struct Patient {
    int patientID;
    char name[50];
    int age;
    float temperature;
    int daysAdmitted;
};

int main() {
    // 2. Declare a structure variable and input patient details (4 Marks)
    struct Patient p;
    float cost;

    printf("Enter Patient ID: ");
    scanf("%d", &p.patientID);

    printf("Enter Patient Name: ");
    scanf(" %[^\n]", p.name); // allows full name with spaces

    printf("Enter Age: ");
    scanf("%d", &p.age);

    printf("Enter Temperature: ");
    scanf("%f", &p.temperature);

    printf("Enter Number of Days Admitted: ");
    scanf("%d", &p.daysAdmitted);

    // 3. Calculate estimated cost at KSh 2,500 per day (3 Marks)
    cost = p.daysAdmitted * 2500;

    // 4. Display all details and calculated cost (4 Marks)
    printf("\n--- Patient Details ---\n");
    printf("Patient ID: %d\n", p.patientID);
    printf("Patient Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Temperature: %.1f\n", p.temperature);
    printf("Days Admitted: %d\n", p.daysAdmitted);
    printf("Estimated Accommodation Cost: KSh %.2f\n", cost);

    return 0;
}