#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	srand(time(0));
	int num;
	int aleatorio = rand() % 100 + 1;

	aleatorio;
	do {
		cout << "\nescolhe um numero e digo se � oq estou a pensar";
		cin >> num;
	
		if(num < aleatorio){ cout << "\nerrado o numero � acima"; }
		if(num > aleatorio) { cout << "errado o numero � abaixo"; }
	} while (aleatorio != num);
	cout << "\nacertaste!!";



	return 0;
}