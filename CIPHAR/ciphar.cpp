#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Caesar_Ciphar(string seq) {
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string Cipher_Encryption = "";
    for (int i = 0; i < seq.length(); i++) {
        char ch = seq[i];
        if (ch == ' ' || ch == '!' || ch == '?' || ch == '.' || ch == ':') {
            Cipher_Encryption += ch;
            continue;
        }
        else if (islower(seq[i])) {
            seq[i] = toupper(seq[i]);
        }
        for (int j = 0; j < alpha.length    (); j++) {
            if (seq[i] == alpha[j]) {
                seq[i] = alpha[(j + 3) % alpha.length()];
                Cipher_Encryption += seq[i];
                break;
            }
        }
    }
    return Cipher_Encryption;
}

main() {
    cout << Caesar_Ciphar("Hello Muhammed");
}