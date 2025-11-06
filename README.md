# 🧠 CIPHAR (Caesar Cipher Encryption & Decryption)

This project implements the **Caesar Cipher** — one of the oldest and simplest encryption techniques — using **C++**.

It shifts each letter of the plaintext by a fixed number of positions in the alphabet.  
Here, the shift value is **3**.

---

## 🔐 Example

### Encryption (Shift +3)

Input: Hello Everyone I want to say something very secret?!
Output: KHOOR HYHUBRQH L ZDQW WR VDB VRPWKLQJ YHUB VHFUHW?!

### Decryption (Shift -3)

Input: KHOOR HYHUBRQH L ZDQW WR VDB VRPWKLQJ YHUB VHFUHW?!
Output: HELLO EVERYONE I WANT TO SAY SOMETHING VERY SECRET?!



---

## 📂 Project Files

CIPHAR/
├── ciphar.cpp # Caesar Cipher Encryption
├── cipharKey.cpp # Caesar Cipher Decryption
├── ciphar.exe # Compiled Encryption Program
├── cipharKey.exe # Compiled Decryption Program
└── README.md



---

## ⚙️ How It Works

Each letter in the input is replaced by a letter **three positions ahead** in the alphabet.  
When decrypting, each letter is shifted **three positions back**.

For example:
| Original | Shifted +3 | Shifted -3 |
|-----------|-------------|-------------|
| A | D | X |
| B | E | Y |
| C | F | Z |

---

## 🧩 Code Overview

### 🔸 Encryption (`ciphar.cpp`)

```cpp
string Caesar_Ciphar(string seq) {
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string Cipher_Encryption = "";

    for (int i = 0; i < seq.length(); i++) {
        char ch = seq[i];
        if (ch == ' ' || ch == '!' || ch == '?' || ch == '.' || ch == ':') {
            Cipher_Encryption += ch;
            continue;
        }
        if (islower(seq[i])) seq[i] = toupper(seq[i]);

        for (int j = 0; j < alpha.length(); j++) {
            if (seq[i] == alpha[j]) {
                seq[i] = alpha[(j + 3) % alpha.length()];
                Cipher_Encryption += seq[i];
                break;
            }
        }
    }
    return Cipher_Encryption;
}
```

### 🔸Decryption (`cipharKey.cpp`)

```cpp
string Cipher_decryption(string seq) {
    string result = "";
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for (int i = 0; i < seq.length(); i++) {
        char ch = seq[i];
        if (ch == ' ' || ch == '!' || ch == '?' || ch == '.' || ch == ':') {
            result += ch;
            continue;
        }
        for (int j = 0; j < alpha.length(); j++) {
            if (seq[i] == alpha[j]) {
                seq[i] = alpha[(j - 3 + alpha.length()) % alpha.length()];
                result += seq[i];
                break;
            }
        }
    }
    return result;
}
```

---

## Run Instructions
 
### Compile Encryption Program
```cpp
g++ ciphar.cpp -o ciphar
```

### Compile Decryption Program
```cpp
g++ cipharKey.cpp -o cipharKey 
```

### Run the Programs
```bash
./ciphar
./cipharKey
```

Author
FlapJack990


License

Licensed under the MIT License — free to use, modify, and distribute.
