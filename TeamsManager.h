#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <string>
#include <Ctime>
#include <time.h>
#include <stdio.h>
#include "Teams.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	Players name;
	Players ranks;
	name.message();
	name.set("PlayMars","porkbelly","pokemon28","Jupiter","kalash_drobodan","s1mple","Zeus","_1234554321_","3drob14","branch");
	name.get();
	ranks.set("silver 1","silver 2","silver elite","silver 2","silver 1","silver 2","silver 3","silver elite","silver 2","silver 3");
	ranks.get();
	teams random;
	random.message();
	random.message1();
	return 0;
}
