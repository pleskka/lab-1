#include <locale.h>
#include <stdio.h>

int name();
int data();
int main()

{

	name();
	data();
	return 0;

}



int name()

{
	setlocale(LC_ALL, "RUS");

	puts("*****************************************");
	puts("*тема: Разработка консольного приложения*");
	puts("*     Выполнила Шуваева Ю.Д.            *");
	puts("*****************************************");
	return 0;


}


int data()

{
	setlocale(LC_ALL, "RUS");

	puts("    __   __   __    __   __ ");
	puts(" | |    |  | |  |  |  | |  |");
	puts(" | |__  |  | |__   |  | |__|");
	puts(" |   |  |  | |  |  |  | |  |");
	puts(" | __|. |__| |__|. |__| |__|.");
	return 0;


}