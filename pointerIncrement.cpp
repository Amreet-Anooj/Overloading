using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    float b = 9.4;
    float *fptr = &b;
    char c = 's';
    char *cptr = &c;
    
    bool d = 1;
    bool *dptr = &d;
    
    cout << "For integer"<<endl;
    cout << "Before increment"<<endl;
    cout << ptr<< endl;
    ptr++;
    cout << "After increment"<<endl;
    cout << ptr<< endl;
    cout << endl;
    
    cout << "For float"<<endl;
    cout << "Before increment"<<endl;
    cout << fptr<< endl;
    fptr++;
    cout << "After increment"<<endl;
    cout << fptr<<endl;
    cout << endl;
    cout << "For boolean"<<endl;
    cout << "Before increment"<<endl;
    cout << dptr<< endl;
    dptr++;
    cout << "After increment"<<endl;
    cout << dptr<<endl;
    cout << endl;
    cout << "For character"<<endl;
    cout << "Before increment"<<endl;
    cout << cptr<< endl;
    cptr++;
    cout << "After increment"<<endl;
    cout << cptr<<endl;
    cout << endl;

    return 0;
}

/*
Output

For integer
Before increment
0x7ffe72829bac
After increment
0x7ffe72829bb0

For float
Before increment
0x7ffe72829ba8
After increment
0x7ffe72829bac

For boolean
Before increment
0x7ffe72829ba6
After increment
0x7ffe72829ba7

For character
Before increment
sffA

After increment
ffA
*/
