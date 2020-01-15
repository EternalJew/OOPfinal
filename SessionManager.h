
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
			cout<<"Health of the s1mple is  "<<d.health<<endl;
		}
		void kill (CTside &d){
			d.health=0;
			cout<<"gla1ve kill s1mple. Health of the s1mple is  "<<d.health<<endl;
		}
		void damage (Tside &d){
			d.health-=56;
			cout<<"Health of the device is  "<<d.health<<endl;
		}
		void kill1 (Tside &a){
			a.health=0;
			cout<<"s1mple kill device. Health of the device is  "<<a.health<<endl;
		}
		void Planted(){
			cout<<"Bomb has been planted!"<<endl;
		}
		void kill2 (Tside &e){
			e.health=0;
			cout<<"porkbelly kill xyr9x. Health of the xyr9x is  "<<e.health<<endl;
		}
		void kill3 (Tside &c){
			c.health=0;
			cout<<"porkbelly kill dupreh. Health of the dupreh is  "<<c.health<<endl;
		}
		void Smoke(){
			cout<<"electronic threw smoke!"<<endl;
		}
		void Defused(){
			cout<<"The bomb has been defused by electronic"<<endl;
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
	CTside s1mple;
	person gla1ve;
	gla1ve.damage(s1mple);
	gla1ve.kill(s1mple);
	Tside device;
	person porkbelly;
	person s1mple;
	s1mple.damage(device);
	s1mple.kill1(device);
	person bomb;
	bomb.Planted();
	Tside dupreh;
	Tside xyr9x;
	porkbelly.kill2(xyr9x);
	porkbelly.kill3(dupreh);
	bomb.Smoke();
	bomb.Defused();
	bomb.Winner();
	bomb.CTmonney();
	bomb.Tmonney();
	return 0;
}
