#pragma once
#include <string>
#include <iostream>
using namespace std;
//2
char* strfind(const char* s, const char* f)
{
    int i = 0;
    while (i < strlen(f))
    {
        int j = 0;
        int aux = i;
        while (f[i] == s[j] && j < strlen(s))
        {
            j++;
            i++;
        }
        if (j == strlen(s))
        {
            return const_cast<char*>(&f[aux]);
        }
        i++;
    }
    return NULL;
}

//a)minim
struct min
{
    bool ok;
    int n;
    char* s = new char[100];
    long b;
    double c;
    long double d;
}minim;

//b)maxim
struct max
{
    bool ok = true;
    int a = 100;
    char s[100];
    long b;
    double c = 4.20;
    long double d;
}maxim;

void ex2()
{
    min elem;
    max elem2;
    cout << "a) so klein wie möglich: " << sizeof(minim);
    cout << "\nb) so groß wie möglich " << sizeof(maxim);
}

//4)
int strlen(char* s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    return i;
}

char* strcpy(char* s, char* p)
{
    int i = 0;
    do
    {
        p[i++] = s[i];
    } while (s[i] != '\0');

    return p;
}