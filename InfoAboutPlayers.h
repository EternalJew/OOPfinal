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
class InfoAboutPlayers{
	public:
	void List(){
		cout<<"1. PlayMars"<<endl;
		cout<<"2. porkbelly"<<endl;
		cout<<"3. pokemon28"<<endl;
		cout<<"4. Jupiter"<<endl;
		cout<<"5. kalash_drobodan"<<endl;
		cout<<"6. s1mple"<<endl;
		cout<<"7. Zeus"<<endl;
		cout<<"8. _1234554321_"<<endl;
		cout<<"9. 3drob14"<<endl;
		cout<<"10. branch"<<endl;
	}
	void Information(){
		cout<<"Enter player:"<<endl;
		int input;
		cin>>input;
		switch(input){
			case 1:
				cout<<"PlayMars.\nOleksiy . \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-2510 hours.\n56 friends.\n 10lvl Faceit; \nsilver 1;"<<endl;
				break;
				case 2:
				cout<<"porkbelly. \nSergey . \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-1248 hours.\n125 friends.\n7 lvl Faceit; \nsilver 2;"<<endl;
				break;
				case 3:
				cout<<"pokemon28.\nOleksiy . \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-1850 hours.\n256 friends.\n9 lvl Faceit; \silver elite; "<<endl;
				break;
				case 4:
				cout<<"Jupiter.\nAndriy. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-1900 hours.\n332 friends.\n8 lvl Faceit; \nsilver 2; "<<endl;
				break;
				case 5:
				cout<<"kalash_drobodan.\nVictor. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-2000 hours.\n568 friends.\n6 lvl Faceit; \nsilver 1; "<<endl;
				break;
				case 6:
				cout<<"s1mple.\nOleksandr. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-9568 hours.\n1024 friends.\n10 lvl Faceit; \nsilver 2; "<<endl;
				break;
				case 7:
				cout<<"Zeus.\nEgor. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-9678 hours.\n1039 friends.\n10 lvl Faceit; \nsilver 3; "<<endl;
				break; 
				case 8:
				cout<<"_1234554321_.\nIoann. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-10358 hours.\n345 friends.\n10 lvl Faceit; \silver elite; "<<endl;
				break;
				case 9:
				cout<<"3drob14.\nArseniy. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-6539 hours.\n369 friends.\n10 lvl Faceit; \nsilver 2; "<<endl;
				break;
				case 10:
					cout<<"branch.\nDemon. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-7987 hours.\n569 friends.\n5 lvl Faceit; \silver 3; "<<endl;
				break;
				default:
					cout<<"Please select an item from menu!"<<endl;
		}
	};
int main(int argc, char** argv) {
	InfoAboutPlayers names;
	names.List();
	names.Information();
	return 0;
	}
