#include <stdio.h>
#include <string.h>

// Define a structure for an element
struct Element {
    char symbol[3];
    char name[20];
    int atomicNumber;
    float atomicWeight;
};

// Function to display the information of an element
void displayElementInfo(struct Element element) {
    printf("Element Information:\n");
    printf("Symbol: %s\n", element.symbol);
    printf("Name: %s\n", element.name);
    printf("Atomic number: %d\n", element.atomicNumber);
    printf("Atomic Weight: %.2f\n", element.atomicWeight);
}

int main() {
    // Define an array of elements (you can expand this with more elements)
    struct Element periodicTable[] = {
        {"H", "Hydrogen", 1, 1.008},
        {"He", "Helium", 2, 4.0026},
        {"Li", "Lithium", 3, 6.94},
        {"Be", "Beryllium", 4, 9.0122},
        {"B", "Boron", 5, 10.81},
        {"C", "Carbon", 6, 12.011},
        {"N", "Nitrogen", 7, 14.007},
        // Add more elements as needed
    };

    // Get user input for the element symbol
    char inputSymbol[3];
    printf("Enter the element symbol: ");
    scanf("%s", inputSymbol);

    // Find the element in the periodic table
    int size = sizeof(periodicTable) / sizeof(periodicTable[0]);
    int index = -1;

    for (int i = 0; i < size; ++i) {
        if (strcmp(inputSymbol, periodicTable[i].symbol) == 0) {
            index = i;
            break;
        }
    }

    // Display the information using switch-case
    switch (index) {
        case 0:
            displayElementInfo(periodicTable[0]);
            break;
        case 1:
            displayElementInfo(periodicTable[1]);
            break;
        case 2:
            displayElementInfo(periodicTable[2]);
            break;
        case 3:
            displayElementInfo(periodicTable[3]);
            break;
        case 4:
            displayElementInfo(periodicTable[4]);
            break;
        case 5:
            displayElementInfo(periodicTable[5]);
            break;
        case 6:
            displayElementInfo(periodicTable[6]);
            break;
        // Add more cases for additional elements
        default:
            printf("Element not found in the periodic table.\n");
            break;
    }

    return 0;
}
