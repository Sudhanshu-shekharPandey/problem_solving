#include <stdio.h>
void main() {
  int n, rev = 0, rem, ori;
    scanf("%d", &n);
    ori = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (ori == rev)
        printf("is a palindrome");
    else
        printf("is not a palindrome");
}
