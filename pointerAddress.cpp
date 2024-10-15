#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *aptr = &a;
    cout << *aptr << endl;
    cout << aptr << endl;
    cout << &a << endl;

    return 0;
}
/*
Output
10
0x7ffccf44bba4
0x7ffccf44bba4
*/
