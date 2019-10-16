# include <time.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

struct food {
  char name[256];
  int price;
};

struct food example();
void printStruct(struct food input);
void modifyStruct(struct food *input, char newName[256], int newPrice);

int main() {
  printf("\n\n");

  struct food f0 = example();
  printf("Example struct:\n");
  printStruct(f0);

  char newName[256] = "Pizza";
  int newCost = 25;
  modifyStruct(&f0, newName, newCost);
  printf("\nModified struct values to %s and %d\nNew struct:\n", newName, newCost);
  printStruct(f0);
  printf("\n\n");
}

struct food example() {
  srand( time(NULL) );
  struct food example;
  int randomInt = rand();
  if (randomInt % 3 == 0) strcpy(example.name, "Chicken");
  if (randomInt % 3 == 1) strcpy(example.name, "Rice");
  if (randomInt % 3 == 2) strcpy(example.name, "Ice Cream");
  example.price = rand() % 50;
  return example;
}

void printStruct(struct food example) {
  printf("Food name: %s\nCost: %d\n", example.name, example.price);
}

void modifyStruct(struct food *input, char newName[256], int newPrice) {
  strcpy(input -> name, newName);
  input -> price = newPrice;
}
