#include <stdio.h>
#include <string.h>

struct FoodItem {
    int id;
    char name[50];
    int quantity;
    float price;
};

void addItem() {
    struct FoodItem item;
    FILE *fp = fopen("warehouse.dat", "ab");

    printf("Enter Food ID: ");
    scanf("%d", &item.id);
    printf("Enter Food Name: ");
    scanf(" %[^\n]s", item.name);
    printf("Enter Quantity: ");
    scanf("%d", &item.quantity);
    printf("Enter Price: ");
    scanf("%f", &item.price);

    fwrite(&item, sizeof(item), 1, fp);
    fclose(fp);

    printf("Item added successfully!\n");
}

void displayItems() {
    struct FoodItem item;
    FILE *fp = fopen("warehouse.dat", "rb");

    printf("\n%-10s %-20s %-10s %-10s\n", "ID", "Name", "Quantity", "Price");
    printf("------------------------------------------------------\n");

    while (fread(&item, sizeof(item), 1, fp)) {
        printf("%-10d %-20s %-10d %-10.2f\n", item.id, item.name, item.quantity, item.price);
    }

    fclose(fp);
}

void searchItem() {
    int id, found = 0;
    struct FoodItem item;
    FILE *fp = fopen("warehouse.dat", "rb");

    printf("Enter ID to search: ");
    scanf("%d", &id);

    while (fread(&item, sizeof(item), 1, fp)) {
        if (item.id == id) {
            printf("Item Found: %s (Qty: %d, Price: %.2f)\n", item.name, item.quantity, item.price);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Item with ID %d not found.\n", id);

    fclose(fp);
}

void updateItem() {
    int id, found = 0;
    struct FoodItem item;
    FILE *fp = fopen("warehouse.dat", "rb+");

    printf("Enter ID to update: ");
    scanf("%d", &id);

    while (fread(&item, sizeof(item), 1, fp)) {
        if (item.id == id) {
            printf("Current Quantity: %d\n", item.quantity);
            printf("Enter new quantity: ");
            scanf("%d", &item.quantity);
            fseek(fp, -sizeof(item), SEEK_CUR);
            fwrite(&item, sizeof(item), 1, fp);
            found = 1;
            printf("Item updated successfully.\n");
            break;
        }
    }

    if (!found)
        printf("Item not found.\n");

    fclose(fp);
}

void deleteItem() {
    int id;
    struct FoodItem item;
    FILE *fp = fopen("warehouse.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    printf("Enter ID to delete: ");
    scanf("%d", &id);

    while (fread(&item, sizeof(item), 1, fp)) {
        if (item.id != id) {
            fwrite(&item, sizeof(item), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);
    remove("warehouse.dat");
    rename("temp.dat", "warehouse.dat");

    printf("Item deleted successfully.\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Food Warehouse Management ---\n");
        printf("1. Add Item\n2. Display Items\n3. Search Item\n4. Update Item\n5. Delete Item\n0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addItem(); break;
            case 2: displayItems(); break;
            case 3: searchItem(); break;
            case 4: updateItem(); break;
            case 5: deleteItem(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
