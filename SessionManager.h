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
class StartRound{
	public:
		void StartMessage(){
			cout<<"Pistol round. Radio: go,go,go!"<<endl;
		}
			void StartMoney(){
			cout<<"start money 800$"<<endl;
		}
			void StartGunCT(){
			cout<<"Start gun for CT: USP-S"<<endl;
		}
		void StartGunT(){
			cout<<"Start gun for T: glock-18"<<endl;
		}
			void StartHP(){
			cout<<"Start hp 100"<<endl;
		}
	};
	class person;
class CTside{
	friend class person;
	private: int health=100;
};
class Tside{
	friend class person;
	private: int health=100;
};
class person{
	public:
		void damage (CTside &d){
			d.health-=91;
			cout<<"Health of the PayMars is  "<<d.health<<endl;
		}
		void kill (CTside &d){
			d.health=0;
			cout<<"Jupiter kill PlayMars. Health of the PlayMars is  "<<d.health<<endl;
		}
		void damage (Tside &d){
			d.health-=56;
			cout<<"Health of the branch is  "<<d.health<<endl;
		}
		void kill1 (Tside &a){
			a.health=0;
			cout<<"s1mple kill branch. Health of the branch is  "<<a.health<<endl;
		}
		void Planted(){
			cout<<"Bomb has been planted!"<<endl;
		}
		void kill2 (Tside &e){
			e.health=0;
			cout<<"porkbelly kill pokemon28. Health of the pokemon28 is  "<<e.health<<endl;
		}
		void kill3 (Tside &c){
			c.health=0;
			cout<<"porkbelly kill kalash_drobodan. Health of the kalash_drobodan is  "<<c.health<<endl;
		}
		void Smoke(){
			cout<<"3drob14 threw smoke!"<<endl;
		}
		void Defused(){
			cout<<"The bomb has been defused by 3drob14"<<endl;
		}
		void Winner(){
			cout<<"              CT WON"<<endl;
		}
		void CTmonney(){
			cout<<"CT: +3400$"<<endl;
		}
		void Tmonney(){
			cout<<"T:  +1900$"<<endl;
		}
};
class timeofsession{
	public:
		void message26(){
		time_t rawtime;
  struct tm * timeinfo;
  char buffer [80];                                
 
  time ( &rawtime );                              
  timeinfo = localtime ( &rawtime );               
 
  strftime (buffer,80,"time %I:%M%p.",timeinfo); 
  std::cout << buffer << std::endl;
		}
};
int main(int argc, char** argv) {
	StartRound round;
	round.StartMessage();
	round.StartMoney();
	round.StartGunCT();
	round.StartGunT();
	round.StartHP();
	CTside PayMars;
	person Jupiter;
	Jupiter.damage(PayMars);
	Jupiter.kill(PayMars);
	Tside branch;
	person porkbelly;
	person s1mple;
	s1mple.damage(branch);
	s1mple.kill1(branch);
	person bomb;
	bomb.Planted();
	Tside kalash_drobodan;
	Tside pokemon28;
	porkbelly.kill2(pokemon28);
	porkbelly.kill3(kalash_drobodan);
	bomb.Smoke();
	bomb.Defused();
	bomb.Winner();
	bomb.CTmonney();
	bomb.Tmonney();
	return 0;
}
