#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cmath>

using namespace std;


void Addition();
void Multiplication();
void Subtraction();
void Division();
void Factorial();
void Power();
void Square_root();
void sin();
void cos();
void tan();

int main()
{
    system ("cls");
    int input, input_trig;

    cout << "\t\t\t\n\n Enter Numbers For Respective Operations : \n\n"
         << "1. Addition \n"
         << "2. Subtraction \n"
         << "3. Multiplication \n"
         << "4. Division \n"
         << "5. Factorial \n"
         << "6. Power\n"
         << "7. Sqaure_root \n"
         << "8. Trignometric Functions \n";

    cin >> input;

    switch (input)
    {
    case 1:
        Addition();
        break;

    case 2:
        Subtraction();
        break;

    case 3:
        Multiplication();
        break;
    case 4:
        Division();
        break;
    case 5:
        Factorial();
        break;
    case 6:
        Power();
        break;
    case 7:
        Square_root();
        break;
    case 8:
        cout << "1. Sin \n"
             << "2. Cos\n"
             << "3. Tan\n";

        switch (input_trig)
        {
        case 1:
            sin();
            break;

        case 2:
            cos();
            break;

        case 3:
            tan();
            break;
        default:
            cout << "Invalid Input :(";
            break;
        }
        break;
    default:
        cout << "Invalid Input :(";
        break;
    }

    return 0;
}

// Functions

void Addition()
{

    int arr[100];
    int result = 0, n = 1;

    cout << "How Many numbers to add :\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number : ", i+1);
        cin >> arr[i];
        result += arr[i];
    }

    cout << "Addition Result is : " << result << endl;
    getch();
}

void Multiplication()
{

    int arr[100];
    int result = 0, n = 1;

    cout << "How Many numbers to multiply :\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number : ", i+1);
        cin >> arr[i];
        result *= arr[i];
    }

    cout << "Multiplication Result is : " << result << endl;
    getch();
}

void Subtraction()
{

    int n1 = 0, n2 = 1, result;

    cout << "Enter numbers to sub :\n";
    cin >> n1;
    cin >> n2;

    result = n1 - n2;

    cout << "Subtraction Result is : " << result << endl;
    getch();
}

void Division()
{

    int n1 = 0, n2 = 1, result;

    cout << "Enter numbers to sub :\n";
    cin >> n1;
    cin >> n2;

    result = n1 / n2;

    cout << "Division Result is : " << result << endl;
    getch();
}

void Factorial()
{
    int n1 = 1;
    int n = 0;
    cout << "Enter Number to find Factorial of : ";
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        n1 *= i;
    }

    cout << "Factorial is : " << n1;
    getch();
}

void Power()
{
    int n1, n2 , n=1;
    cout << "Enter Number to find Power of : ";
    cin >> n1;
    cout << "Enter Power : ";
    cin >> n2;

    for (int i = 1; i <= n2; i++)
    {
        n *= n1;
    }

    cout << "Power is : " << n;
    getch();
}

void Square_root()
{
    int n1;
    cout << "Enter Number to find Root of : ";
    cin >> n1;

    printf("The root '%d' is : %f", n1, sqrt(n1));
    getch();
}

void sin()
{
    int n1;
    cout << "Enter Number to find Sin of : ";
    cin >> n1;

    printf("The sin '%d' is : %d", n1, sin(n1));
    getch();
}
void cos()
{
    int n1;
    cout << "Enter Number to find tanos of : ";
    cin >> n1;

    printf("The cos '%d' is : %d", n1, cos(n1));
    getch();
}
void tan()
{
    int n1;
    cout << "Enter Number to find Tan of : ";
    cin >> n1;

    printf("The tan '%d' is : %d", n1, tan(n1));
    getch();
}