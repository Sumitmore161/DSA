#include <stdio.h>
struct student
{
    char Roll_No[11];
    char branch[10];
    int  date;
};
typedef struct student s;

int main()
{
s a[5];
gets(a[0].Roll_No);
     
     puts(a[0].Roll_No);
    return 0;
}