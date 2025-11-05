#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

string Cipher_decryption(string seq) {
    string result = "";
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < seq.length(); i++) {
        char ch = seq[i];
        if (ch == ' ' || ch == '!' || ch == '?' || ch == '.' || ch == ':')
        {
            result += ch;
            continue;
        }
        for (int j = 0; j < alpha.length(); j++) {
            if (seq[i] == alpha[j]) {
                seq[i] = alpha[(j - 3 + alpha.length())  % alpha.length()];
                result += seq[i];
                if (seq[i] == ' ')
                {
                    result += seq[i];
                }
                break;
            }
        }
    }
    return result;
}


int main (){
    cout << Cipher_decryption("KHOOR PXKDPPHG");
    return 0;
}