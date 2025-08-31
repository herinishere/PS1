// LEVEL 1:
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int shift;
    
    int choice;
    cout << "1.encode" << endl;
    cout << "2.decode" << endl;
    cin >> choice;

    switch (choice)
      {
        case 1:
    cout << "enter s ";
    cin >> s; 
    cout << "enter shift ";
    cin >> shift;
    for (int i=0;i<s.length();i++){
        char c=s[i];
        if (c >='a' && c<='z'-(shift%26)){
            s[i]=s[i]+(shift%26);
        }else if (c>'z'-(shift%26) && c<='z'){
            s[i]=s[i]-26+(shift%26);
        }else if (c>='A'&& c<='Z'-(shift%26)){
            s[i]=s[i]+(shift%26);
        }else if (c>'Z'-(shift%26) && c<='z'){
            s[i]=s[i]-26+(shift%26);
        }
        } 
        cout << s;
        break;

        case 2:
    cout << "enter s ";
    cin >> s; 
    cout << "enter shift ";
    cin >> shift;
    for (int i=0;i<s.length();i++){
        char c=s[i];
        if (c >='a'+(shift%26) && c<='z'){
            s[i]=s[i]-(shift%26);
        }else if (c>='a' && c<'a'+shift%26){
            s[i]=s[i]+26-(shift%26);
        }else if (c>='A'+(shift%26)&& c<='Z'){
            s[i]=s[i]+(shift%26);
        }else if (c>='A' && c<'A'+(shift%26)){
            s[i]=s[i]-26+(shift%26);
        }
        } 
        cout << s;
        break;

    }
        return 0;
    }


// LEVEL 3:
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string str;
    cout << "enter s: ";
    cin >> s;
    cout << "enter str: ";
    cin >> str;
    for (int i=0;i<s.length();i++){
        char c=s[i];
        char d=str[i];
        if (c >='a' && c<='z'-(str[i%str.length()]-'a')){
            s[i]=s[i]+(str[i%str.length()]-'a');
        }else if (c>'z'-(str[i%str.length()]-'a') && c<='z'){
            s[i]=s[i]-26+(str[i%str.length()]-'a');
        }else if (c>='A'&& c<='Z'-(str[i%str.length()]-'a')){
            s[i]=s[i]+(str[i%str.length()]-'a');
        }else if (c>'Z'-(str[i%str.length()]-'a') && c<='z'){
            s[i]=s[i]-26+(str[i%str.length()]-'a');
        }
    }
    cout << s;
    return 0;
}

 
