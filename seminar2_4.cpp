
#include <iostream> 
#include<string.h>
#include <cstring> 
using namespace std;

    int main()
    {
        char s1[100] = "All the closed eyes start to glisten";

        // return length of s1 
        cout << strlen(s1) << endl;

        char s2[100];

        // copies s1 into s2 
        strcpy(s2, s1);
        cout << s2 << endl;

}

