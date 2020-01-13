#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <string>
#include <Ctime>
#include <time.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Players{
	friend class Players;
	public:
		void message(){
		cout<<"the name of the players is:"<<endl;}
	 string Player1,Player2,Player3,Player4,Player5,Player6,Player7,Player8,Player9,Player10;
	void set( string type_Player1,string type_Player2,string type_Player3,string type_Player4,string type_Player5,string type_Player6,string type_Player7,string type_Player8,string type_Player9,string type_Player10){
	Player1=type_Player1;
	Player2=type_Player2;
	Player3=type_Player3;
	Player4=type_Player4;
	Player5=type_Player5;
	Player6=type_Player6;
	Player7=type_Player7;
	Player8=type_Player8;
	Player9=type_Player9;
	Player10=type_Player10;	}
	void get(){
		cout<<"\nPlayer1:"<<Player1<<"\nPlayer2:"<<Player2<<"\nPlayer3:"<<Player3<<"\nPlayer4:"<<Player4<<"\nPlayer5:"<<Player5<<"\nPlayer6:"<<Player6<<"\nPlayer7:"<<Player7<<"\nPlayer8:"<<Player8<<"\nPlayer9:"<<Player9<<"\nPlayer10:"<<Player10;
	}
};
class teams{
	public:
		void random(){
			const int a=10;
	int arrA[a];
	int arrB[a];                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
		for(int i=1; i<=5;i++){
		arrA[i] = (rand ()% 10);
        arrB[i] = arrA[i];
	}
 cout<<"\narrB [ ";
    for(int i = 1; i <=5; i++)
        cout<<arrB[i]<<" ";
    cout<<"]"<<endl;
		}
		void message(){
			cout<<"\nCT: PlayMars,porkbelly,Zeus,s1mple,3drob14"<<endl;
		}
		void message1(){
			cout<<"T: _1234554321_,pokemon28,Jupiter,kalash_drobodan,branch"<<endl;
		}
};
