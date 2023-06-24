#include<stdio.h>

void scan_f() {
    int a;
    scanf("%d", &a); // takes input from user
}

void get_s() {
    int sentence[100];
    gets(sentence); // also takes input from user. can take strings directly. tho it's deprecated
}

void f_gets() {
    int sentence[100];
    fgets(sentence, sizeof(sentence), stdin); // also takes input from user
}

void put_s() {
    puts("Hello World"); // directly prints anything passed
}

int main() {
    /* Call the respective functions as needed */

    // scan_f();
    // get_s();
    // f_gets();
    // put_s();
    return 0;
}