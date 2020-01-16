using namespace std;
class Player{
	char name[256];
	char hours[256];
public:
	Player(const char* name="unknown", const char* hours="hours");
	Player(char*, char*, const char*);
	
	const char* get_name() const {return name;}
	const char* get_hours() const {return hours;}
	};
	Player::Player(const char* name_, const char* hours_){
		strcpy(name, name_);
		strcpy(hours,hours_);
	}
int main(int argc, char** argv) {
	using std::cout;
	const size_t max_size = 12;
	
Player player_arr[max_size] = {	
	Player("PlayMars", "258 hrs"),
	Player("porkbelly", "657 hrs"),
	Player("pokemon28", "325 hrs"),
	Player("Jupiter", "324 hrs"),
	Player("kalash_drobodan", "231 hrs"),
	Player("s1mple", "456 hrs"),
	Player("Zeus", "159 hrs"),
	Player("_1234554321_", "32 hrs"),
	Player("3drob14", "12 hrs"),
	Player("branch", "258 hrs"),
	Player("UkR", "369 hrs"),
	Player("mamkinmodnik", "915 hrs")
};
for (size_t i=0; i<max_size; i++){
	cout<<"Player: ";
	cout<<player_arr[i].get_name();
	cout<<"\n";
	cout<<player_arr[i].get_hours();
	cout<<"\n";
}
	return 0;
}
