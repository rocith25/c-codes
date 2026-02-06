 #include <stdio.h>

int main() {
    int year;
   
    if (scanf("%d", &year) != 1) return 1;

    
    if (year% 400==0) {
        printf("Leap Year\n");
    } else if(year%100 ==0) {
        printf("Not a Leap Year\n");
    } else if(year% 4==0) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }

    return 0;
}

