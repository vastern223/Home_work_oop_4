#include<iostream>
#include"arr_class.h"
using namespace std;

int main()
{
	Array arr;
	arr.Add_arr(5);
	arr.Add_arr(3);
	arr.Add_arr(1);
	arr.Show_arr();
	arr.Sort_arr();
	arr.Show_arr();
	system("pause");
	return 0;
}