#include <stdio.h>

int main()
{
  int cust_id;
  float bill, unit;
  char cust_name[50];
  printf("Enter customer ID: ");
  scanf("%d", &cust_id);
  printf("Enter customer name: ");
  scanf("%s", cust_name);
  printf("Enter units consumed: ");
  scanf("%f", &unit);
  if (unit <= 199)
  {
    bill = 1.20 * unit;
  }

  else if (unit >= 200 && unit < 400)
  {
    bill = 1.50 * unit;
  }

  else if (unit >= 400 && unit < 600)
  {
    bill = 1.80 * unit;
  }

  else if (unit >= 600)
  {
    bill = 2.00 * unit;
  }

  if (bill > 400)
  {
    bill = bill + (0.15 * bill);
  }
  if (bill < 100)
  {
    bill = 100;
  }

  printf("\nCustomer ID: %d\n", cust_id);
  printf("Customer Name: %s\n", cust_name);
  printf("Total Amount: %.2f rs.\n", bill);

  return 0;

}
