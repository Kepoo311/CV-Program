#include <iostream>
#include <conio.h>
#include <bitset>

using namespace std;

int main(int argc, char const *argv[])
{
	int desimal;

	cout <<"Masukkan Nilai Decimal : ";
	cin >> desimal;
	bitset<8> binary(desimal);

    system("cls");

    cout <<"Nilai Decimal : " << desimal << endl;
    cout <<"Nilai Binary : " << binary.to_string() << endl;
    cout <<"Nilai Hexadecimal : " << hex << desimal << endl;
    cout <<"Nilai Octal : " << oct << desimal << endl;

    cout<<"By KepoDev Ganss";

    getch();
	return 0;
}
