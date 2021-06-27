#include<bits/stdc++.h>
using namespace std ;
void remove(char* str)
{
    if (str[0] == '\0')
        return;
 
    if (str[0] == str[1]) {
         
        int i = 0;
        while (str[i] != '\0') {
            str[i] = str[i + 1];
            i++;
        }
        
        remove(str);
    }
     remove(str + 1);
 }
 
 int main()
{
    char str1[] = "aabccba";
    remove(str1);
    cout << str1 << endl;
 
 
    return 0;
}
