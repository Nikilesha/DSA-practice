#include <iostream>
#include <string.h>

using namespace std;
string check(string &password)
{
    bool has_int = false;

    bool has_upper = false;
    bool has_lower = false;
    bool has_special = false;

    if (password.length() < 8)
    {
        return "Weak , password too short";
    }
    for (char c : password)
    {
        if (islower(c))
            has_lower = true;
        else if (isupper(c))
            has_upper = true;
        else if (isdigit(c))
            has_int = true;
        else
            has_special = true;
    }

    int score = has_lower + has_upper + has_int + has_special;

    if (score == 4)
        return "strong pasword";
    else if (score == 3)
        return "moderate passowrd";
    else if (score == 2)
        return "good password";
    else
        return "poor password";
}

int main()
{
    string password;
    cout << "Enter your password: ";
    cin >> password;

    string res = check(password);

    cout << res << endl;
}