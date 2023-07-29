#include <iostream>
#include <cmath>
#include <Windows.h>
#include <locale.h>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main()
{
    /*
        A simple calculator writen in C++ - with choosing ability and index detection by B7T3.
    */
    cout << "Welcome in simple C++ Calculator program!\n";
    Sleep(3000);

    void clear();
    {
        cout << "\x1B[2J\x1B[H";
    }

    char end;
    char choice2;
    bool mainprog = true;
    bool choExit = true;
    while(choExit)
    {

        do
        {


            while (mainprog)
            {

                char option;
                cout << "Choose your option what you want to do!\n";
                cout << "addition - \"+\"\n";
                cout << "subtraction - \"-\"\n";
                cout << "multiplication - \"*\"\n";
                cout << "division - \"/\"\n";
                cin >> option;

                switch (option)
                {
                case '+':

                    void clear();
                    {
                        cout << "\x1B[2J\x1B[H";
                    }
                    cout << "You choose addition!\n";

                    float frstNum, secNum, result;
                    cout << "write first number: ";
                    cin >> frstNum;
                    cout << "\n" << "Write The second number: ";
                    cin >> secNum;
                    cout << "Counting";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";

                    void clear();
                    {
                        cout << "\x1B[2J\x1B[H";
                    }

                    result = frstNum + secNum;

                    cout << "The result is: " << result << endl;
                    break;

                case '-':
                    void clear();
                    {
                        cout << "\x1B[2J\x1B[H";
                    }
                    cout << "You choose subtraction!\n";

                    float minFrstNum, minSecNum, secresult;
                    cout << "write first number: ";
                    cin >> minFrstNum;
                    cout << "\n" << "Write The second number: ";
                    cin >> minSecNum;
                    cout << "Counting";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";

                    void clear();
                    {
                        cout << "\x1B[2J\x1B[H";
                    }

                    secresult = minFrstNum - minSecNum;

                    cout << "The result is: " << secresult << endl;
                    break;

                case '*':
                    void clear();
                    {
                        cout << "\x1B[2J\x1B[H";
                    }
                    cout << "You choose multiplication!\n";

                    float mulFrstNum, mulSecNum, mulResult;
                    cout << "write first number: ";
                    cin >> mulFrstNum;
                    cout << "\n" << "Write The second number: ";
                    cin >> mulSecNum;
                    cout << "Counting";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";

                    void clear();
                    {
                        cout << "\x1B[2J\x1B[H";
                    }

                    mulResult = mulFrstNum * mulSecNum;

                    cout << "The result is: " << mulResult << endl;
                    break;

                case '/':
                    void clear();
                    {
                        cout << "\x1B[2J\x1B[H";
                    }
                    cout << "You choose division!\n";

                    float divFrstNum, divSecNum, divResult;
                    cout << "write first number: ";
                    cin >> divFrstNum;
                    cout << "\n" << "Write The second number: ";
                    cin >> divSecNum;
                    cout << "Counting";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";
                    Sleep(1000);
                    cout << ".";

                    void clear();
                    {
                        cout << "\x1B[2J\x1B[H";
                    }

                    divResult = divFrstNum / divSecNum;

                    cout << "The result is: " << divResult << endl;
                    break;

                default:

                    void clear();
                    {
                        cout << "\x1B[2J\x1B[H";
                    }
                    cout << "Error...\n";
                    cout << "Choose only between \"+\" \"-\" \"*\" \"/\"\n";
                    Sleep(4000);
                    break;
                }


                do
                {

                    cout << "would you like to try again? (Y/N): ";
                    cin >> end;
                    switch (end)
                    {
                    case 'Y':
                        break;
                    case 'N':
                        break;
                    case 'y':
                        break;
                    case 'n':
                        break;

                    default:

                        cout << "Wrong input!\n";
                        Sleep(2000);
                        void clear();
                        {
                            cout << "\x1B[2J\x1B[H";
                        }
                        break;
                    }

                } while (end != 'y' && end != 'n');

                void clear();
                {
                    cout << "\x1B[2J\x1B[H";
                }

                if (end == 'n')
                {
                    mainprog = false;
                }

            }
            void clear();
            {
                cout << "\x1B[2J\x1B[H";
            }

            cout << "Would you like to exit? (Y/N): ";
            cin >> choice2;

            if (choice2 == 'n')
            {
                mainprog = true;
            }

            void clear();
            {
                cout << "\x1B[2J\x1B[H";
            }

        }while (choice2 == 'n' && choice2 != 'y');

        void clear();
        {
            cout << "\x1B[2J\x1B[H";
        }

        if (choice2 == 'y')
        {
            choExit = false;
        }

    }

    cout << "Thank you! See you soon!" << endl;
    Sleep(2000);

    return 0;
}