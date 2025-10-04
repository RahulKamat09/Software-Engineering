#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for Product
struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

// Union example for Stock Status
union Stock
{
    int inStock;   // 1 = In Stock
    int outStock;  // 0 = Out of Stock
};

// Global array
struct Product products[100];
int count = 0;

// Function prototypes
void addProduct();
void displayProducts();
void searchProduct();
void updateProduct();
void deleteProduct();
void saveToFile();
void loadFromFile();

int main()
{
    int choice;

    loadFromFile();

    do
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display All Products\n");
        printf("3. Search Product by ID\n");
        printf("4. Update Product\n");
        printf("5. Delete Product\n");
        printf("6. Save to File\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            addProduct();
            break;
        case 2:
            displayProducts();
            break;
        case 3:
            searchProduct();
            break;
        case 4:
            updateProduct();
            break;
        case 5:
            deleteProduct();
            break;
        case 6:
            saveToFile();
            break;
        case 7:
            printf("Exiting... Data Saved!\n");
            saveToFile();
            break;
        default:
            printf("Invalid choice!\n");
        }
    }
    while(choice != 7);

    return 0;
}

// Add new product
void addProduct()
{
    if(count >= 100)
    {
        printf("Inventory full!\n");
        return;
    }
    struct Product p;
    printf("Enter Product ID: ");
    scanf("%d", &p.id);
    getchar();

    printf("Enter Product Name: ");
    scanf(" %[^\n]", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%f", &p.price);

    products[count] = p;
    count++;

    printf("Product Added Successfully!\n");
}

// Display all products
void displayProducts()
{
    if(count == 0)
    {
        printf("No products available!\n");
        return;
    }
    printf("\n--- Product List ---\n");
    for(int i=0; i<count; i++)
    {
        printf("Id=%d Name=%s Quantity=%d Price=%.2f\n",
               products[i].id, products[i].name, products[i].quantity, products[i].price);

        union Stock st;
        if(products[i].quantity > 0)
        {
            st.inStock = 1;
            printf("Status: In Stock\n");
        }
        else
        {
            st.outStock = 0;
            printf("Status: Out of Stock\n");
        }
        printf("----------------------\n");
    }
}

// Search product by ID
void searchProduct()
{
    int id;
    printf("Enter Product ID to search: ");
    scanf("%d", &id);
    for(int i=0; i<count; i++)
    {
        if(products[i].id == id)
        {
            printf("Product Found!\n");
            printf("Id=%d Name=%s Quantity=%d Price=%.2f\n",
                   products[i].id, products[i].name, products[i].quantity, products[i].price);
            return;
        }
    }
    printf("Product not found!\n");
}

// Update product
void updateProduct()
{
    int id;
    printf("Enter Product ID to update: ");
    scanf("%d", &id);
    for(int i=0; i<count; i++)
    {
        if(products[i].id == id)
        {
            printf("1. Update Quantity\n");
            printf("2. Update Price\n");
            int choice;
            scanf("%d", &choice);

            if(choice == 1)
            {
                printf("Enter new Quantity: ");
                scanf("%d", &products[i].quantity);
            }
            else if(choice == 2)
            {
                printf("Enter new Price: ");
                scanf("%f", &products[i].price);
            }
            else
            {
                printf("Invalid choice!\n");
                return;
            }
            printf("Product Updated!\n");
            return;
        }
    }
    printf("Product not found!\n");
}

// Delete product
void deleteProduct()
{
    int id;
    printf("Enter Product ID to delete: ");
    scanf("%d", &id);
    for(int i=0; i<count; i++)
    {
        if(products[i].id == id)
        {
            for(int j=i; j<count-1; j++)
            {
                products[j] = products[j+1];
            }
            count--;
            printf("Product Deleted!\n");
            return;
        }
    }
    printf("Product not found!\n");
}

// Save to file
void saveToFile()
{
    FILE *fp = fopen("inventory.txt", "w");
    if(fp == NULL)
    {
        printf("Error saving file!\n");
        return;
    }
    for(int i=0; i<count; i++)
    {
        fprintf(fp, "Id=%d Name=%s Quantity=%d Price=%.2f\n",
                products[i].id, products[i].name, products[i].quantity, products[i].price);
    }
    fclose(fp);
    printf("Data saved to inventory.txt!\n");
}

// Load from file
void loadFromFile()
{
    FILE *fp = fopen("inventory.txt", "r");
    if(fp == NULL)
    {
        return;
    }
    while(fscanf(fp, "Id=%d Name=%49s Quantity=%d Price=%f\n",
                 &products[count].id,
                 products[count].name,
                 &products[count].quantity,
                 &products[count].price) == 4)
    {
        count++;
    }
    fclose(fp);
}
