#include<iostream>
#include<conio.h>
#include<time.h>

using namespace std;

int main(){

    system("cls");

    cout<<"\t\n\n LOve Calculator \n\n";

    char name1 [100];
    cout<<"Enter Your Name : ";
    cin>>name1;

    char name2 [100];
    cout<<"Enter Your Partner's Name : ";
    cin>>name2;

    srand(time(0));
    int num = rand()%100;

    cout<<"\nIts "<<num<<"%";

    getch();

    return 0;
}