#include<cs50.h>

Include<stdio.h>

intmain(void)
{
// get numbers from users
int x = get_int("x: ");
int y = get_int("y: ");

// Divide x by y
float z = x / y;
print("%f\n", z);
}
