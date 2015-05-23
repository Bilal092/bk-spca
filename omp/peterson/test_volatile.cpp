/*
 * Copyright Divakar Viswanath, 2009-2014
 */

/*     
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of version 2 of the GNU General Public License as 
 * published by the Free Software Foundation.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "volatile.hh"
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * cut n paste from utils/utils.cpp double ---> int
 */
void array_show(int *v, int n, const char* mesg){
	cout<<"\t\t\t\t"<<mesg<<endl;
	cout<<scientific<<setprecision(15);
	for(int i=0; i < n; i++)
		cout<<"\t\t"<<setw(3)<<i<<": "<<v[i]<<endl;
	cout<<endl;
}

int main(){
	int x = 7;
	const int len = 5;
	int list[len] = {1, 2, 3, 4, 5};

	array_show(list, len, "initial list");

	addx(&x, list, len);
	array_show(list, len, "added 5 using addx");

	vaddx(&x, list, len);
	array_show(list, len, "added 5 using vaddx [volatile]");
}