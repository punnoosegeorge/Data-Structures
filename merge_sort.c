#include<stdio.h>

void main() {
    int i, j, k, a[100], b[100], c[100], n, m;
    printf("enter the size of array");
    scanf("%d", & n);
    printf("enter elements in 1st array\n");
    for (i = 0; i < n; i++) {
      scanf("%d", & a[i]);

    }
    for (i = 0; i < n; i++) {
      printf("%d", a[i]);
    }
    printf("\nenter size of array 2\n");
    scanf("%d", & m);
    printf("enter elements in 2nd array\n");
    for (j = 0; j < m; j++) {
      scanf("%d", & b[j]);
    }
    printf("\nelements of second array are:\n");
    for (j = 0; j < m; j++) {
      printf("\n%d", b[j]);
    }
    i = j = 0;
    for (k = 0; k < (m + n); k++) {
      if (i < n && j < m) {
        if (a[i] < b[j]) {
          c[k] = a[i];
          i++;
        } else {
          c[k] = b[j];
          j++;
       }
        } else {
          if (i < n) {
            c[k] = a[i];
            i++;
          }
          if (j < m) {
            c[k] = b[j];
            j++;
          }
        }
      }
printf("merged array:");
      for (k = 0; k < (m + n); k++) {
        printf("\t%d", c[k]);
      }
    }
