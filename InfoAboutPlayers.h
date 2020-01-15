using namespace std;
class InfoAboutPlayers{
	public:
	void List(){
		cout<<"1. s1mple"<<endl;
		cout<<"2. Niko"<<endl;
		cout<<"3. dev1ce"<<endl;
		cout<<"4. gla1ve"<<endl;
		cout<<"5. Guardian"<<endl;
		cout<<"6. Fallen"<<endl;
		cout<<"7. electronic"<<endl;
		cout<<"8. Zeus"<<endl;
		cout<<"9. Edward"<<endl;
		cout<<"10. rain"<<endl;
		cout<<"11. twistzzz"<<endl;
		cout<<"12. Steiwe2k"<<endl;
	}
	void Information(){
		cout<<"Enter player:"<<endl;
		int input;
		cin>>input;
		switch(input){
			case 1:
				cout<<"s1mple.\nOleksiy . \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-2510 hours.\n56 friends.\n 10lvl Faceit; \nsilver 1;"<<endl;
				break;
				case 2:
				cout<<"Niko. \nSergey . \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-1248 hours.\n125 friends.\n7 lvl Faceit; \nsilver 2;"<<endl;
				break;
				case 3:
				cout<<"dev1ce.\nOleksiy . \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-1850 hours.\n256 friends.\n9 lvl Faceit; \silver elite; "<<endl;
				break;
				case 4:
				cout<<"gla1ve.\nAndriy. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-1900 hours.\n332 friends.\n8 lvl Faceit; \nsilver 2; "<<endl;
				break;
				case 5:
				cout<<"Guardian.\nVictor. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-2000 hours.\n568 friends.\n6 lvl Faceit; \nsilver 1; "<<endl;
				break;
				case 6:
				cout<<"Fallen.\nOleksandr. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-9568 hours.\n1024 friends.\n10 lvl Faceit; \nsilver 2; "<<endl;
				break;
				case 7:
				cout<<"electronic.\nEgor. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-9678 hours.\n1039 friends.\n10 lvl Faceit; \nsilver 3; "<<endl;
				break; 
				case 8:
				cout<<"Zeus.\nIoann. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-10358 hours.\n345 friends.\n10 lvl Faceit; \silver elite; "<<endl;
				break;
				case 9:
				cout<<"Edward.\nArseniy. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-6539 hours.\n369 friends.\n10 lvl Faceit; \nsilver 2; "<<endl;
				break;
				case 10:
					cout<<"rain.\nDemon. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-7987 hours.\n569 friends.\n5 lvl Faceit; \silver 3; "<<endl;
				break;
				case 11:
					cout<<"twistzzz.\nDemon. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-7987 hours.\n569 friends.\n5 lvl Faceit; \silver 3; "<<endl;
				break;
				case 12:
					cout<<"Steiwe2k.\nDemon. \nRivne, Rivnens`ka Oblast`, Ukraine.\nCSGO-7987 hours.\n569 friends.\n5 lvl Faceit; \silver 3; "<<endl;
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
