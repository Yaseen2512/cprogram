#include <stdio.h>

// Function to compute the factorial
 int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main() {
    int num,i,n;
    printf("enter a value of n:");
    scanf("%d",&n);
    printf("Enter a value :");
    for (int i=n;i<n;i++)
    scanf("%d",&num);
    for (int n=num;n<=num;n++){

   int res=fact(num);


    printf("Factorial of %d: %d\n", num, res);
    }
    return 0;
}

