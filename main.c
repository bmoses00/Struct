# include <time.h>
# include <stdlib.h>
# include <string.h>

struct food {
  char name[256];
  int price;
};

struct food example();
void printStruct(struct food input);
void modifyStruct(struct food input, char newName [256], int newPrice);

int main() {
  struct food foo = example();
  printf("Example food struct: %s\n", foo);
  // char[256] newName = "Pizza";
  // int newCost = 25;
  // modifyStruct()
  // printf("Modified struct values to %s and %d\n", newName, newCost);

}

struct food example() {
  srand( time(NULL) );
  struct food example;
  if (rand() % 3 == 0) strcpy(example.name, "Chicken");
  if (rand() % 3 == 1) strcpy(example.name, "Rice");
  if (rand() % 3 == 2) strcpy(example.name, "Ice Cream");
  example.price = rand() % 50;
  return example;
}
