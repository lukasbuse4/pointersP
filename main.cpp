#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


/*
void print(char *C){
    while (*C != '\0'){
        cout << *C;
        C++;
    }
    cout << endl;
}
 */
int main(){
    /*
    int x = 5;
    int *p = &x;  // pointer p stored at memory location x
    *p = 6;       //pointer p = 6 now (value)
    int **q= &p;//stores address p
    int *** r = &q;

    cout << *p << endl;
    cout << ** q << endl;
    cout << *** r << endl;
    ***r = 10;
    cout << "x =" << x << endl;

    int a[]= {1, 2, 3,4 , 5};
    cout << a << endl; //memroy locaton
    cout << &a[0] << endl;

    cout << a[0]<< endl;
    cout << *a;

    char C [4];
    C[0]= 'j';
    C[1]= 'o';
    C[2]= 'h';
    C[3]= 'n';
    C[4]= '\0';
    cout<< C << endl;

    char C[20]= "Hello";
    cout << C << endl;
*/

    char name[5]= "mark";
    cout << name << endl;
    cout << name [1] << endl;
    cout << *name;
}