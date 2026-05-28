#include <stdio.h>

/*
C Unions
A union is similar to a struct in that it can store members of different data types.

Difference:
- In a struct, each member has its own memory.
- In a union, all members share the same memory.

Only one member can hold a valid value at a time.
*/

union cUnion
{
    int age;
    char myLetter;
    char myString[36];
};

int main()
{
    union cUnion c1;

    /*
    Access Union Members
    Since all members share the same memory,
    changing one affects the others.
    */

    c1.age = 21;
    printf("age: %d\n", c1.age);

    c1.myLetter = 'R';
    printf("myLetter: %c\n", c1.myLetter);

    /*
    After assigning myLetter,
    age value becomes corrupted because
    both share the same memory.
    */

    printf("age after myLetter assignment: %d\n", c1.age);

    /*
    Size of Union
    Size equals the largest member size.
    */

    printf("Size of union: %zu bytes\n", sizeof(c1));

    return 0;
}