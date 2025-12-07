1. String Length Calculator 
Description

The program prompts the user to enter a text string and calculates its length using a custom function my_strlen.

The program correctly handles the newline character (\n) entered when pressing Enter.

Functions

int my_strlen(const char s[]) — counts the number of characters in a string up to the null terminator \0.

Example Output
Enter text: Hello, world!
The length of your text is: 13 characters

Compilation and Run
gcc my_strlen.c -o my_strlen
./my_strlen

2. Banking Application 
Description

This program simulates a simple banking application with a menu:

Deposit to an account

Withdraw from an account

Show account balance

Exit

The program uses the saldo array to store account balances. All operations are implemented as separate functions, keeping main clean and readable.





