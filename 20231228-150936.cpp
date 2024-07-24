
#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, reversedNum = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        cout << "The number is a palindrome.";
    } else {
        cout << "The number is not a palindrome.";
    }

    return 0;
}
/*
,In this program, we take the input number from the user and store it in the `num` variable. We also create a few more variables to keep track of the original number, the reversed number, and the remainder.

We use a while loop to reverse the number. In each iteration of the loop, we extract the last digit of the number using the modulo operator `%` and add it to the reversed number after multiplying it by 10. We then divide the number by 10 to remove the last digit.

After the loop, we compare the original number with the reversed number. If they are the same, we print that the number is a palindrome. Otherwise, we print that the number is not a palindrome.

Hope that helps! Let me know if you have any questions or need further assistance. 😊🌟
    cout << "Hello World!" << endl;
    return 0;
}*/