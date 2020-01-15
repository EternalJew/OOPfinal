
using namespace std;

class Player
{
private:
	string name;
	int rank;
	int id;

public:
	void setName(string name) {
		this->name = name;
	}

	void addRank() {
		rank += 26;
	}

	void subRank() {
		if (rank >= 26)	rank -= 26;
	}

	Player() {
		name = "unknown";
		rank = 800;
		id = 0;
	}

	Player(string name, int rank, int id) {
		this->name = name;
		this->rank = rank;
		this->id = id;
	}

	string getName() {
		return name;
	}

	int getRank() {
		return rank;
	}

	int getID() {
		return id;
	}
};
