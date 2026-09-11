#include <locale.h>
#include <stdio.h>


void name()

{
	system("pause");
	setlocale(LC_ALL, "RUS");

	puts("*****************************************");
	puts("*тема: Разработка консольного приложения*");
	puts("*     Выполнила Шуваева Ю.Д.            *");
	puts("*****************************************");


}


void data()

{
	system("pause");
	setlocale(LC_ALL, "RUS");

	puts("    __   __   __    __   __ ");
	puts(" | |    |  | |  |  |  | |  |");
	puts(" | |__  |  | |__   |  | |__|");
	puts(" |   |  |  | |  |  |  | |  |");
	puts(" | __|. |__| |__|. |__| |__|.");


}


void main()

{

	name();
	data();

}



