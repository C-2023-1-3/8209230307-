#include<iostream>
#include"mytemperature.h"
using namespace std;

double celsius_to_fah(double cel)  //�����¶ȵ������¶�
{
	double fah = 0;
	fah = 32 + 1.8 * cel;
	return fah;
}
double fahrenheit_to_cels(double fah) //�����¶ȵ������¶�
{
	double cel;
	cel = (fah - 32) / 1.80;
	return cel;
}