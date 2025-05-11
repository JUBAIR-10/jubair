#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct {
    int id;
    char name[50];
    int quantity;
    float price;
} FoodItem;

FoodItem warehouse[MAX_ITEMS];
int count = 0;

void addItem() {
    if (count >= MAX_ITEMS) {
        printf("Warehouse is full!\n");
        return;
    }

    FoodItem item;
    printf("Enter ID: ");
    scanf("%d", &item.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", item.name);
    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);
    printf("Enter Price: ");
    scanf("%f", &item.price);

    warehouse[count++] = item;
    printf("Item added successfully!\n");
}

void displayItems() {
    if (count == 0) {
        printf("No items in warehouse.\n");
        return;
    }

    printf("\n%-5s %-20s %-10s %-10s\n", "ID", "Name", "Quantity", "Price");
    for (int i = 0; i < count; i++) {
        printf("%-5d %-20s %-10d $%-10.2f\n", warehouse[i].id, warehouse[i].name, warehouse[i].quantity, warehouse[i].price);
    }
}

void searchItem() {
    char name[50];
    printf("Enter name to search: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < count; i++) {
        if (strcmp(warehouse[i].name, name) == 0) {
            printf("Found: ID=%d, Quantity=%d, Price=$%.2f\n", warehouse[i].id, warehouse[i].quantity, warehouse[i].price);
            return;
        }
    }

    printf("Item not found.\n");
}

void saveToFile() {
    FILE *fp = fopen("warehouse.txt", "w");
    if (!fp) {
        printf("Error saving file!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d,%s,%d,%.2f\n", warehouse[i].id, warehouse[i].name, warehouse[i].quantity, warehouse[i].price);
    }

    fclose(fp);
    printf("Data saved to warehouse.txt\n");
}

void loadFromFile() {
    FILE *fp = fopen("warehouse.txt", "r");
    if (!fp) {
        printf("No existing data to load.\n");
        return;
    }

    count = 0;
    while (fscanf(fp, "%d,%49[^,],%d,%f\n", &warehouse[count].id, warehouse[count].name, &warehouse[count].quantity, &warehouse[count].price) == 4) {
        count++;
    }

    fclose(fp);
    printf("Data loaded successfully.\n");
}

int main() {
    int choice;

    loadFromFile();

    do {
        printf("\n--- Food Warehouse Menu ---\n");
        printf("1. Add Food Item\n");
        printf("2. View All Items\n");
        printf("3. Search by Name\n");
        printf("4. Save to File\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addItem(); break;
            case 2: displayItems(); break;
            case 3: searchItem(); break;
            case 4: saveToFile(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
